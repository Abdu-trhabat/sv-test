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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch12Filler_PR_CN.c", 13, "reach_error"); }
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
unsigned long int var_1_2 = 10;
unsigned long int var_1_3 = 2;
unsigned long int var_1_4 = 8;
unsigned char var_1_5 = 128;
unsigned char var_1_6 = 10;
unsigned char var_1_7 = 0;
signed long int var_1_8 = 128;
signed long int var_1_9 = 1967984875;
float var_1_10 = 256.625;
float var_1_11 = 24.5;
float var_1_12 = 999999.25;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 0;
double var_1_15 = 127.3;
float var_1_16 = 15.8;
double var_1_17 = -0.4;
unsigned long int var_1_18 = 8;
unsigned long int var_1_19 = 2366774301;
unsigned char var_1_20 = 0;
signed short int var_1_21 = 5;
signed char var_1_22 = 0;
signed char var_1_23 = 2;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 0;
signed long int var_1_29 = -128;
signed char var_1_30 = 10;
signed char var_1_31 = -16;
signed long int var_1_32 = 256;
signed short int var_1_34 = -50;
unsigned long int var_1_35 = 4;
signed char var_1_36 = -16;
signed char var_1_37 = -16;
unsigned short int var_1_38 = 16;
unsigned short int var_1_39 = 256;
unsigned short int var_1_40 = 48844;
unsigned short int var_1_41 = 25575;
unsigned short int var_1_42 = 10000;
unsigned long int var_1_43 = 4;
unsigned char var_1_45 = 1;
double var_1_46 = 8.1;
double var_1_47 = 10.4;
double var_1_48 = 1.2;
double var_1_49 = 31.1;
unsigned char var_1_50 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_18 = 8;
signed short int last_1_var_1_21 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch12Filler_PR_CN
	unsigned char stepLocal_0 = var_1_6;
	/* 17L, 62L, 383L, 397L, 861L, 920L) */ if (/* 7L, 45L, 46L, 384L, 398L, 851L, 910L) */ ((/* 5L, 43L, 47L, 385L, 399L, 849L, 909L) */ (- (last_1_var_1_18))) > (stepLocal_0))) {
		/* 16L, 61L, 388L, 402L, 860L, 919L) */ var_1_8 = (
			/* 15L, 60L, 391L, 405L, 859L, 918L) */ ((
				/* 13L, 58L, 392L, 406L, 857L, 916L) */ ((
					var_1_9
				) - (
					last_1_var_1_21
				))
			) - (
				var_1_5
			))
		);
	}


	// From: CodeObject6
	/* 255L) */ if (/* 237L, 236L) */ ((var_1_41) >= (/* 239L, 235L) */ (min (/* 239L, 235L) */ (var_1_29) , (0)))))) {
		/* 254L) */ var_1_43 = (
			/* 253L) */ (min (
				/* 253L) */ (
					var_1_38
				) , (
					/* 252L) */ (min (
						/* 252L) */ (
							var_1_41
						) , (
							var_1_32
						)
					))
				)
			))
		);
	}


	// From: Req5Batch12Filler_PR_CN
	unsigned long int stepLocal_2 = var_1_2;
	unsigned char stepLocal_1 = var_1_20;
	/* 988L, 181L, 579L, 606L) */ if (/* 966L, 141L, 142L, 580L, 607L) */ ((var_1_3) > (stepLocal_2))) {
		/* 974L, 155L, 583L, 610L) */ var_1_18 = (
			/* 973L, 154L, 586L, 613L) */ (min (
				/* 973L, 154L, 586L, 613L) */ (
					var_1_9
				) , (
					/* 972L, 153L, 588L, 615L) */ ((
						var_1_19
					) - (
						var_1_6
					))
				)
			))
		);
	} else {
		/* 987L, 179L, 591L, 618L) */ if (/* 978L, 160L, 161L, 592L, 619L) */ ((stepLocal_1) || (/* 977L, 159L, 163L, 594L, 621L) */ ((var_1_9) >= (var_1_8))))) {
			/* 982L, 174L, 597L, 624L) */ var_1_18 = (
				var_1_6
			);
		} else {
			/* 986L, 178L, 601L, 628L) */ var_1_18 = (
				var_1_7
			);
		}
	}


	// From: Req1Batch12Filler_PR_CN
	/* 880L, 34L, 284L, 309L) */ if (/* 881L, 6L, 7L, 285L, 310L) */ ((var_1_2) > (/* 883L, 5L, 9L, 287L, 312L) */ ((var_1_3) * (var_1_4))))) {
		/* 886L, 24L, 290L, 315L) */ var_1_1 = (
			/* 889L, 23L, 293L, 318L) */ ((
				var_1_5
			) - (
				/* 891L, 22L, 295L, 320L) */ ((
					var_1_6
				) + (
					var_1_7
				))
			))
		);
	} else {
		/* 894L, 33L, 298L, 323L) */ var_1_1 = (
			/* 897L, 32L, 301L, 326L) */ (min (
				/* 897L, 32L, 301L, 326L) */ (
					var_1_7
				) , (
					/* 899L, 31L, 303L, 328L) */ ((
						/* 900L, 29L, 304L, 329L) */ (abs (
							16
						))
					) + (
						var_1_6
					))
				)
			))
		);
	}


	// From: CodeObject4
	/* 184L) */ if (/* 145L, 144L) */ ((var_1_31) < (/* 147L, 143L) */ ((var_1_36) / (var_1_37))))) {
		/* 158L) */ var_1_35 = (
			var_1_32
		);
	} else {
		/* 182L) */ if (/* 166L, 165L) */ ((/* 167L, 163L) */ ((/* 168L, 161L) */ (abs (var_1_30))) / (var_1_37))) < (var_1_32))) {
			/* 181L) */ var_1_35 = (
				var_1_30
			);
		}
	}


	// From: Req3Batch12Filler_PR_CN
	/* 925L, 104L, 440L, 462L) */ if (/* 926L, 72L, 73L, 441L, 463L) */ ((var_1_18) != (/* 928L, 71L, 75L, 443L, 465L) */ (min (/* 928L, 71L, 75L, 443L, 465L) */ (var_1_6) , (var_1_5)))))) {
		/* 931L, 88L, 446L, 468L) */ var_1_10 = (
			/* 934L, 87L, 449L, 471L) */ (max (
				/* 934L, 87L, 449L, 471L) */ (
					var_1_11
				) , (
					var_1_12
				)
			))
		);
	} else {
		/* 937L, 102L, 452L, 474L) */ if (/* 938L, 91L, 92L, 453L, 475L) */ ((var_1_13) || (var_1_14))) {
			/* 941L, 101L, 456L, 478L) */ var_1_10 = (
				var_1_11
			);
		}
	}


	// From: CodeObject1
	/* 60L) */ if (var_1_25) {
		/* 44L) */ var_1_24 = (
			var_1_26
		);
	} else {
		/* 58L) */ if (var_1_26) {
			/* 51L) */ var_1_24 = (
				var_1_27
			);
		} else {
			/* 57L) */ var_1_24 = (
				/* 56L) */ ((
					var_1_27
				) || (
					var_1_28
				))
			);
		}
	}


	// From: CodeObject5
	/* 224L) */ if (/* 191L, 190L) */ ((var_1_30) > (var_1_31))) {
		/* 212L) */ if (/* 200L, 199L) */ ((var_1_28) && (var_1_27))) {
			/* 211L) */ var_1_38 = (
				/* 210L) */ (min (
					/* 210L) */ (
						var_1_30
					) , (
						var_1_39
					)
				))
			);
		}
	} else {
		/* 223L) */ var_1_38 = (
			/* 222L) */ ((
				var_1_40
			) - (
				/* 221L) */ ((
					var_1_41
				) - (
					/* 220L) */ ((
						var_1_42
					) - (
						var_1_30
					))
				))
			))
		);
	}


	// From: Req4Batch12Filler_PR_CN
	/* 946L, 133L, 527L, 540L) */ if (/* 947L, 116L, 117L, 528L, 541L) */ ((/* 948L, 114L, 118L, 529L, 542L) */ ((var_1_12) / (var_1_16))) >= (var_1_10))) {
		/* 952L, 132L, 533L, 546L) */ var_1_15 = (
			/* 955L, 131L, 536L, 549L) */ ((
				var_1_17
			) + (
				255.5
			))
		);
	}


	// From: Req6Batch12Filler_PR_CN
	/* 994L, 191L, 688L, 695L) */ var_1_21 = (
		/* 997L, 190L, 691L, 698L) */ (abs (
			var_1_7
		))
	);


	// From: CodeObject7
	/* 289L) */ if (/* 269L, 268L) */ ((/* 270L, 266L) */ ((/* 271L, 263L) */ ((var_1_46) * (var_1_47))) + (/* 274L, 265L) */ (abs (var_1_48))))) > (var_1_49))) {
		/* 288L) */ var_1_45 = (
			var_1_50
		);
	}


	// From: Req7Batch12Filler_PR_CN
	unsigned long int stepLocal_3 = var_1_3;
	/* 1022L, 229L, 759L, 781L) */ if (/* 1004L, 200L, 201L, 760L, 782L) */ ((var_1_21) == (stepLocal_3))) {
		/* 1021L, 227L, 763L, 785L) */ if (/* 1006L, 208L, 209L, 764L, 786L) */ (! (var_1_20))) {
			/* 1014L, 220L, 766L, 788L) */ var_1_22 = (
				/* 1013L, 219L, 769L, 791L) */ (max (
					/* 1013L, 219L, 769L, 791L) */ (
						var_1_6
					) , (
						/* 1012L, 218L, 771L, 793L) */ ((
							5
						) - (
							var_1_7
						))
					)
				))
			);
		} else {
			/* 1020L, 226L, 774L, 796L) */ var_1_22 = (
				/* 1019L, 225L, 777L, 799L) */ ((
					var_1_7
				) + (
					var_1_23
				))
			);
		}
	}


	// From: CodeObject2
	/* 108L) */ if (/* 73L, 72L) */ ((/* 74L, 67L) */ ((var_1_30) * (var_1_31))) < (/* 77L, 71L) */ (abs (var_1_32))))) {
		/* 102L) */ if (/* 88L, 87L) */ ((var_1_32) <= (var_1_30))) {
			/* 97L) */ var_1_29 = (
				var_1_31
			);
		} else {
			/* 101L) */ var_1_29 = (
				var_1_30
			);
		}
	} else {
		/* 107L) */ var_1_29 = (
			var_1_31
		);
	}


	// From: CodeObject3
	/* 136L) */ if (/* 117L, 116L) */ ((var_1_30) < (/* 119L, 115L) */ (max (/* 119L, 115L) */ (var_1_31) , (var_1_29)))))) {
		/* 134L) */ if (var_1_27) {
			/* 133L) */ var_1_34 = (
				var_1_31
			);
		}
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
	assume_abort_if_not(var_1_4 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 127);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 64);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 63);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 1073741822);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	assume_abort_if_not(var_1_16 != 0.0F);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 2147483647);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -63);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 0);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -128);
	assume_abort_if_not(var_1_31 <= 127);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_36 >= -128);
	assume_abort_if_not(var_1_36 <= 127);
	var_1_37 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_37 >= -128);
	assume_abort_if_not(var_1_37 <= 127);
	assume_abort_if_not(var_1_37 != 0);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 32767);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_41 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_41 >= 16383);
	assume_abort_if_not(var_1_41 <= 32767);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 8191);
	assume_abort_if_not(var_1_42 <= 16383);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -922337.2036854776000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
	var_1_49 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_49 >= -922337.2036854776000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	if (/* 293L, 6L, 12L, 335L, 360L, 1028L) */ ((var_1_2) > (/* 295L, 5L, 14L, 337L, 362L, 1030L) */ ((var_1_3) * (var_1_4))))) {
	} else {
	}
	if (/* 317L, 45L, 50L, 412L, 426L, 867L, 1052L, 24L) */ ((/* 318L, 43L, 51L, 413L, 427L, 865L, 1053L, 22L) */ (- (last_1_var_1_18))) > (var_1_6))) {
	}
	if (/* 334L, 72L, 78L, 485L, 507L, 1069L) */ ((var_1_18) != (/* 336L, 71L, 80L, 487L, 509L, 1071L) */ (min (/* 336L, 71L, 80L, 487L, 509L, 1071L) */ (var_1_6) , (var_1_5)))))) {
	} else {
		if (/* 346L, 91L, 95L, 497L, 519L, 1081L) */ ((var_1_13) || (var_1_14))) {
		}
	}
	if (/* 355L, 116L, 122L, 554L, 567L, 1090L) */ ((/* 356L, 114L, 123L, 555L, 568L, 1091L) */ ((var_1_12) / (var_1_16))) >= (var_1_10))) {
	}
	if (/* 368L, 141L, 145L, 634L, 661L, 1103L) */ ((var_1_3) > (var_1_2))) {
	} else {
		if (/* 380L, 160L, 166L, 646L, 673L, 1115L) */ ((var_1_20) || (/* 382L, 159L, 168L, 648L, 675L, 1117L) */ ((var_1_9) >= (var_1_8))))) {
		} else {
		}
	}
	if (/* 402L, 200L, 204L, 804L, 826L, 1137L) */ ((var_1_21) == (var_1_3))) {
		if (/* 406L, 208L, 211L, 808L, 830L, 1141L) */ (! (var_1_20))) {
		} else {
		}
	}
	return /* 428L) */ ((
	/* 427L) */ ((
		/* 426L) */ ((
			/* 425L) */ ((
				/* 424L) */ ((
					/* 423L) */ ((
						/* 292L, 35L, 334L, 359L, 1027L) */ ((
							/* 293L, 6L, 12L, 335L, 360L, 1028L) */ ((
								var_1_2
							) > (
								/* 295L, 5L, 14L, 337L, 362L, 1030L) */ ((
									var_1_3
								) * (
									var_1_4
								))
							))
						) ? (
							/* 298L, 24L, 340L, 365L, 1033L) */ ((
								var_1_1
							) == (
								/* 298L, 24L, 340L, 365L, 1033L) */ ((unsigned char) (
									/* 301L, 23L, 343L, 368L, 1036L) */ ((
										var_1_5
									) - (
										/* 303L, 22L, 345L, 370L, 1038L) */ ((
											var_1_6
										) + (
											var_1_7
										))
									))
								))
							))
						) : (
							/* 306L, 33L, 348L, 373L, 1041L) */ ((
								var_1_1
							) == (
								/* 306L, 33L, 348L, 373L, 1041L) */ ((unsigned char) (
									/* 309L, 32L, 351L, 376L, 1044L) */ (min (
										/* 309L, 32L, 351L, 376L, 1044L) */ (
											var_1_7
										) , (
											/* 311L, 31L, 353L, 378L, 1046L) */ ((
												/* 312L, 29L, 354L, 379L, 1047L) */ (abs (
													16
												))
											) + (
												var_1_6
											))
										)
									))
								))
							))
						))
					) && (
						/* 316L, 63L, 411L, 425L, 877L, 1051L, 34L) */ ((
							/* 317L, 45L, 50L, 412L, 426L, 867L, 1052L, 24L) */ ((
								/* 318L, 43L, 51L, 413L, 427L, 865L, 1053L, 22L) */ (- (
									last_1_var_1_18
								))
							) > (
								var_1_6
							))
						) ? (
							/* 322L, 61L, 416L, 430L, 876L, 1057L, 33L) */ ((
								var_1_8
							) == (
								/* 322L, 61L, 416L, 430L, 876L, 1057L, 33L) */ ((signed long int) (
									/* 325L, 60L, 419L, 433L, 875L, 1060L, 32L) */ ((
										/* 326L, 58L, 420L, 434L, 873L, 1061L, 30L) */ ((
											var_1_9
										) - (
											last_1_var_1_21
										))
									) - (
										var_1_5
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 333L, 105L, 484L, 506L, 1068L) */ ((
						/* 334L, 72L, 78L, 485L, 507L, 1069L) */ ((
							var_1_18
						) != (
							/* 336L, 71L, 80L, 487L, 509L, 1071L) */ (min (
								/* 336L, 71L, 80L, 487L, 509L, 1071L) */ (
									var_1_6
								) , (
									var_1_5
								)
							))
						))
					) ? (
						/* 339L, 88L, 490L, 512L, 1074L) */ ((
							var_1_10
						) == (
							/* 339L, 88L, 490L, 512L, 1074L) */ ((float) (
								/* 342L, 87L, 493L, 515L, 1077L) */ (max (
									/* 342L, 87L, 493L, 515L, 1077L) */ (
										var_1_11
									) , (
										var_1_12
									)
								))
							))
						))
					) : (
						/* 345L, 103L, 496L, 518L, 1080L) */ ((
							/* 346L, 91L, 95L, 497L, 519L, 1081L) */ ((
								var_1_13
							) || (
								var_1_14
							))
						) ? (
							/* 349L, 101L, 500L, 522L, 1084L) */ ((
								var_1_10
							) == (
								/* 349L, 101L, 500L, 522L, 1084L) */ ((float) (
									var_1_11
								))
							))
						) : (
							1
						))
					))
				))
			) && (
				/* 354L, 134L, 553L, 566L, 1089L) */ ((
					/* 355L, 116L, 122L, 554L, 567L, 1090L) */ ((
						/* 356L, 114L, 123L, 555L, 568L, 1091L) */ ((
							var_1_12
						) / (
							var_1_16
						))
					) >= (
						var_1_10
					))
				) ? (
					/* 360L, 132L, 559L, 572L, 1095L) */ ((
						var_1_15
					) == (
						/* 360L, 132L, 559L, 572L, 1095L) */ ((double) (
							/* 363L, 131L, 562L, 575L, 1098L) */ ((
								var_1_17
							) + (
								255.5
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 367L, 182L, 633L, 660L, 1102L) */ ((
				/* 368L, 141L, 145L, 634L, 661L, 1103L) */ ((
					var_1_3
				) > (
					var_1_2
				))
			) ? (
				/* 371L, 155L, 637L, 664L, 1106L) */ ((
					var_1_18
				) == (
					/* 371L, 155L, 637L, 664L, 1106L) */ ((unsigned long int) (
						/* 374L, 154L, 640L, 667L, 1109L) */ (min (
							/* 374L, 154L, 640L, 667L, 1109L) */ (
								var_1_9
							) , (
								/* 376L, 153L, 642L, 669L, 1111L) */ ((
									var_1_19
								) - (
									var_1_6
								))
							)
						))
					))
				))
			) : (
				/* 379L, 180L, 645L, 672L, 1114L) */ ((
					/* 380L, 160L, 166L, 646L, 673L, 1115L) */ ((
						var_1_20
					) || (
						/* 382L, 159L, 168L, 648L, 675L, 1117L) */ ((
							var_1_9
						) >= (
							var_1_8
						))
					))
				) ? (
					/* 385L, 174L, 651L, 678L, 1120L) */ ((
						var_1_18
					) == (
						/* 385L, 174L, 651L, 678L, 1120L) */ ((unsigned long int) (
							var_1_6
						))
					))
				) : (
					/* 389L, 178L, 655L, 682L, 1124L) */ ((
						var_1_18
					) == (
						/* 389L, 178L, 655L, 682L, 1124L) */ ((unsigned long int) (
							var_1_7
						))
					))
				))
			))
		))
	) && (
		/* 395L, 191L, 702L, 709L, 1130L) */ ((
			var_1_21
		) == (
			/* 395L, 191L, 702L, 709L, 1130L) */ ((signed short int) (
				/* 398L, 190L, 705L, 712L, 1133L) */ (abs (
					var_1_7
				))
			))
		))
	))
) && (
	/* 401L, 230L, 803L, 825L, 1136L) */ ((
		/* 402L, 200L, 204L, 804L, 826L, 1137L) */ ((
			var_1_21
		) == (
			var_1_3
		))
	) ? (
		/* 405L, 228L, 807L, 829L, 1140L) */ ((
			/* 406L, 208L, 211L, 808L, 830L, 1141L) */ (! (
				var_1_20
			))
		) ? (
			/* 408L, 220L, 810L, 832L, 1143L) */ ((
				var_1_22
			) == (
				/* 408L, 220L, 810L, 832L, 1143L) */ ((signed char) (
					/* 411L, 219L, 813L, 835L, 1146L) */ (max (
						/* 411L, 219L, 813L, 835L, 1146L) */ (
							var_1_6
						) , (
							/* 413L, 218L, 815L, 837L, 1148L) */ ((
								5
							) - (
								var_1_7
							))
						)
					))
				))
			))
		) : (
			/* 416L, 226L, 818L, 840L, 1151L) */ ((
				var_1_22
			) == (
				/* 416L, 226L, 818L, 840L, 1151L) */ ((signed char) (
					/* 419L, 225L, 821L, 843L, 1154L) */ ((
						var_1_7
					) + (
						var_1_23
					))
				))
			))
		))
	) : (
		1
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
