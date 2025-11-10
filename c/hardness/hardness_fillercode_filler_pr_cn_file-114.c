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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch114Filler_PR_CN.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned char var_1_4 = 1;
unsigned short int var_1_5 = 10;
unsigned char var_1_6 = 0;
signed short int var_1_7 = 10;
signed short int var_1_8 = -10;
signed short int var_1_9 = -16;
unsigned long int var_1_10 = 200;
float var_1_11 = 500.6;
float var_1_12 = 256.6;
unsigned char var_1_14 = 0;
unsigned long int var_1_15 = 10;
unsigned short int var_1_16 = 49637;
unsigned long int var_1_17 = 3843750782;
unsigned long int var_1_18 = 3466749644;
unsigned long int var_1_19 = 1243012029;
float var_1_20 = 128.6;
float var_1_21 = 63.8;
unsigned long int var_1_22 = 25;
unsigned long int var_1_23 = 5;
float var_1_24 = 0.4;
float var_1_25 = 64.25;
signed char var_1_26 = -25;
signed char var_1_27 = -4;
float var_1_28 = 255.5;
signed long int var_1_29 = -5;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
float var_1_35 = 32.3;
unsigned char var_1_36 = 0;
unsigned long int var_1_37 = 5;
unsigned short int var_1_38 = 200;
unsigned short int var_1_39 = 16;
unsigned long int var_1_40 = 25;
unsigned long int var_1_41 = 25;
unsigned long int var_1_42 = 8;
float var_1_43 = 64.2;
float var_1_44 = 256.75;
float var_1_45 = 15.625;
signed short int var_1_46 = 5;
signed long int var_1_47 = 4;
unsigned char var_1_48 = 0;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_10 = 200;
unsigned long int last_1_var_1_22 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch114Filler_PR_CN
	unsigned char stepLocal_1 = var_1_4;
	unsigned long int stepLocal_0 = /* 7L, 19L, 23L, 282L, 303L, 840L, 879L) */ ((last_1_var_1_10) >> (var_1_5));
	/* 29L, 50L, 274L, 295L, 852L, 904L) */ if (/* 16L, 6L, 7L, 275L, 296L, 836L, 892L) */ ((/* 14L, 4L, 8L, 276L, 297L, 834L, 891L) */ ((last_1_var_1_22) <= (last_1_var_1_10))) && (stepLocal_1))) {
		/* 28L, 48L, 280L, 301L, 851L, 903L) */ if (/* 19L, 21L, 22L, 281L, 302L, 842L, 894L) */ ((stepLocal_0) <= (64u))) {
			/* 23L, 35L, 286L, 307L, 846L, 898L) */ var_1_1 = (
				var_1_6
			);
		} else {
			/* 27L, 47L, 290L, 311L, 850L, 902L) */ var_1_1 = (
				0
			);
		}
	}


	// From: CodeObject1
	/* 61L) */ var_1_24 = (
		var_1_25
	);


	// From: Req2Batch114Filler_PR_CN
	/* 911L, 71L, 360L, 373L) */ if (/* 912L, 58L, 59L, 361L, 374L) */ ((var_1_1) || (var_1_6))) {
		/* 915L, 70L, 364L, 377L) */ var_1_7 = (
			/* 918L, 69L, 367L, 380L) */ (min (
				/* 918L, 69L, 367L, 380L) */ (
					var_1_5
				) , (
					var_1_8
				)
			))
		);
	}


	// From: CodeObject7
	/* 237L) */ if (/* 198L, 197L) */ ((var_1_37) >= (/* 200L, 196L) */ ((var_1_40) >> (8))))) {
		/* 231L) */ if (/* 212L, 211L) */ ((/* 213L, 209L) */ (abs (var_1_26))) <= (var_1_41))) {
			/* 224L) */ var_1_43 = (
				/* 223L) */ (abs (
					var_1_25
				))
			);
		} else {
			/* 230L) */ var_1_43 = (
				/* 229L) */ ((
					var_1_44
				) + (
					var_1_45
				))
			);
		}
	} else {
		/* 236L) */ var_1_43 = (
			var_1_44
		);
	}


	// From: CodeObject9
	/* 283L) */ if (/* 264L, 263L) */ ((var_1_43) < (/* 266L, 262L) */ (abs (/* 267L, 261L) */ (abs (15.99f))))))) {
		/* 281L) */ if (var_1_48) {
			/* 280L) */ var_1_47 = (
				var_1_26
			);
		}
	}


	// From: Req7Batch114Filler_PR_CN
	/* 1028L, 249L, 759L, 765L) */ var_1_20 = (
		var_1_21
	);


	// From: CodeObject8
	/* 255L) */ if (/* 244L, 243L) */ ((var_1_26) <= (-32))) {
		/* 254L) */ var_1_46 = (
			/* 253L) */ (abs (
				var_1_27
			))
		);
	}


	// From: Req8Batch114Filler_PR_CN
	/* 1034L, 259L, 783L, 789L) */ var_1_22 = (
		16u
	);


	// From: Req9Batch114Filler_PR_CN
	/* 1040L, 269L, 807L, 813L) */ var_1_23 = (
		var_1_18
	);


	// From: Req3Batch114Filler_PR_CN
	unsigned char stepLocal_2 = var_1_1;
	/* 939L, 109L, 410L, 427L) */ if (var_1_6) {
		/* 929L, 87L, 412L, 429L) */ var_1_9 = (
			var_1_5
		);
	} else {
		/* 938L, 107L, 416L, 433L) */ if (/* 933L, 92L, 93L, 417L, 434L) */ ((stepLocal_2) && (/* 932L, 91L, 95L, 419L, 436L) */ ((var_1_23) != (var_1_5))))) {
			/* 937L, 106L, 422L, 439L) */ var_1_9 = (
				var_1_5
			);
		}
	}


	// From: CodeObject2
	/* 69L) */ var_1_26 = (
		var_1_27
	);


	// From: CodeObject4
	/* 85L) */ var_1_29 = (
		var_1_27
	);


	// From: CodeObject5
	/* 144L) */ if (var_1_31) {
		/* 100L) */ var_1_30 = (
			/* 99L) */ ((
				var_1_32
			) || (
				/* 98L) */ ((
					var_1_33
				) || (
					var_1_34
				))
			))
		);
	} else {
		/* 142L) */ if (/* 110L, 109L) */ ((/* 111L, 104L) */ ((var_1_25) + (/* 113L, 103L) */ (- (var_1_28))))) < (/* 115L, 108L) */ (abs (/* 116L, 107L) */ ((var_1_24) * (var_1_35))))))) {
			/* 137L) */ var_1_30 = (
				/* 136L) */ ((
					var_1_33
				) && (
					/* 135L) */ ((
						var_1_32
					) && (
						/* 134L) */ ((
							var_1_34
						) && (
							var_1_36
						))
					))
				))
			);
		} else {
			/* 141L) */ var_1_30 = (
				0
			);
		}
	}


	// From: CodeObject6
	/* 185L) */ if (/* 155L, 154L) */ ((/* 156L, 152L) */ ((var_1_38) / (var_1_39))) != (var_1_27))) {
		/* 176L) */ var_1_37 = (
			/* 175L) */ ((
				/* 169L) */ (min (
					/* 169L) */ (
						var_1_38
					) , (
						var_1_39
					)
				))
			) + (
				/* 174L) */ ((
					var_1_40
				) + (
					/* 173L) */ ((
						var_1_41
					) + (
						var_1_42
					))
				))
			))
		);
	} else {
		/* 184L) */ var_1_37 = (
			/* 183L) */ (min (
				/* 183L) */ (
					var_1_39
				) , (
					/* 182L) */ ((
						var_1_41
					) + (
						var_1_40
					))
				)
			))
		);
	}


	// From: Req5Batch114Filler_PR_CN
	unsigned short int stepLocal_3 = var_1_5;
	/* 968L, 167L, 530L, 542L) */ if (/* 963L, 150L, 151L, 531L, 543L) */ ((/* 962L, 148L, 152L, 532L, 544L) */ (max (/* 962L, 148L, 152L, 532L, 544L) */ (/* 960L, 146L, 153L, 533L, 545L) */ (~ (0u))) , (var_1_23)))) > (stepLocal_3))) {
		/* 967L, 166L, 537L, 549L) */ var_1_14 = (
			var_1_5
		);
	}


	// From: Req6Batch114Filler_PR_CN
	signed long int stepLocal_6 = /* 979L, 193L, 197L, 588L, 633L) */ ((var_1_16) - (10));
	unsigned char stepLocal_5 = var_1_6;
	unsigned long int stepLocal_4 = var_1_23;
	/* 1021L, 240L, 578L, 623L) */ if (/* 984L, 175L, 176L, 579L, 624L) */ ((var_1_5) < (stepLocal_4))) {
		/* 1020L, 238L, 582L, 627L) */ if (/* 986L, 184L, 185L, 583L, 628L) */ ((stepLocal_5) && (var_1_1))) {
			/* 1009L, 226L, 586L, 631L) */ if (/* 988L, 195L, 196L, 587L, 632L) */ ((stepLocal_6) == (var_1_23))) {
				/* 998L, 215L, 592L, 637L) */ var_1_15 = (
					/* 997L, 214L, 595L, 640L) */ (min (
						/* 997L, 214L, 595L, 640L) */ (
							/* 995L, 212L, 596L, 641L) */ ((
								/* 993L, 210L, 597L, 642L) */ ((
									var_1_5
								) + (
									var_1_16
								))
							) + (
								10u
							))
						) , (
							var_1_14
						)
					))
				);
			} else {
				/* 1008L, 225L, 602L, 647L) */ var_1_15 = (
					/* 1007L, 224L, 605L, 650L) */ ((
						/* 1005L, 222L, 606L, 651L) */ ((
							/* 1003L, 220L, 607L, 652L) */ (max (
								/* 1003L, 220L, 607L, 652L) */ (
									var_1_17
								) , (
									var_1_18
								)
							))
						) - (
							var_1_5
						))
					) - (
						var_1_14
					))
				);
			}
		} else {
			/* 1019L, 237L, 612L, 657L) */ var_1_15 = (
				/* 1018L, 236L, 615L, 660L) */ ((
					var_1_14
				) + (
					/* 1017L, 235L, 617L, 662L) */ ((
						var_1_19
					) - (
						/* 1016L, 234L, 619L, 664L) */ (min (
							/* 1016L, 234L, 619L, 664L) */ (
								var_1_16
							) , (
								var_1_5
							)
						))
					))
				))
			);
		}
	}


	// From: CodeObject3
	/* 77L) */ var_1_28 = (
		var_1_25
	);


	// From: Req4Batch114Filler_PR_CN
	/* 943L, 139L, 478L, 491L) */ if (/* 944L, 119L, 120L, 479L, 492L) */ ((/* 945L, 117L, 121L, 480L, 493L) */ ((var_1_11) - (var_1_12))) >= (var_1_20))) {
		/* 949L, 137L, 484L, 497L) */ if (var_1_1) {
			/* 951L, 136L, 486L, 499L) */ var_1_10 = (
				var_1_5
			);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 1);
	assume_abort_if_not(var_1_5 <= 31);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32767);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 32767);
	assume_abort_if_not(var_1_16 <= 65535);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 3221225470);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 3221225470);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_27 >= -127);
	assume_abort_if_not(var_1_27 <= 126);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 0);
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 65535);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 65535);
	assume_abort_if_not(var_1_39 != 0);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 1073741824);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 536870912);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 536870911);
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -461168.6018427383000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 0);
	assume_abort_if_not(var_1_48 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_22 = var_1_22;
}

int property(void) {
	if (/* 286L, 6L, 12L, 317L, 338L, 860L, 1046L, 38L) */ ((/* 287L, 4L, 13L, 318L, 339L, 858L, 1047L, 36L) */ ((last_1_var_1_22) <= (last_1_var_1_10))) && (var_1_4))) {
		if (/* 294L, 21L, 27L, 323L, 344L, 866L, 1054L, 44L) */ ((/* 295L, 19L, 28L, 324L, 345L, 864L, 1055L, 42L) */ ((last_1_var_1_10) >> (var_1_5))) <= (64u))) {
		} else {
		}
	}
	if (/* 312L, 58L, 62L, 387L, 400L, 1072L) */ ((var_1_1) || (var_1_6))) {
	}
	if (var_1_6) {
	} else {
		if (/* 329L, 92L, 98L, 451L, 468L, 1089L) */ ((var_1_1) && (/* 331L, 91L, 100L, 453L, 470L, 1091L) */ ((var_1_23) != (var_1_5))))) {
		}
	}
	if (/* 340L, 119L, 125L, 505L, 518L, 1100L) */ ((/* 341L, 117L, 126L, 506L, 519L, 1101L) */ ((var_1_11) - (var_1_12))) >= (var_1_20))) {
		if (var_1_1) {
		}
	}
	if (/* 353L, 150L, 157L, 555L, 567L, 1113L) */ ((/* 354L, 148L, 158L, 556L, 568L, 1114L) */ (max (/* 354L, 148L, 158L, 556L, 568L, 1114L) */ (/* 355L, 146L, 159L, 557L, 569L, 1115L) */ (~ (0u))) , (var_1_23)))) > (var_1_5))) {
	}
	if (/* 365L, 175L, 179L, 669L, 714L, 1125L) */ ((var_1_5) < (var_1_23))) {
		if (/* 369L, 184L, 188L, 673L, 718L, 1129L) */ ((var_1_6) && (var_1_1))) {
			if (/* 373L, 195L, 201L, 677L, 722L, 1133L) */ ((/* 374L, 193L, 202L, 678L, 723L, 1134L) */ ((var_1_16) - (10))) == (var_1_23))) {
			} else {
			}
		} else {
		}
	}
	return /* 434L) */ ((
	/* 433L) */ ((
		/* 432L) */ ((
			/* 431L) */ ((
				/* 430L) */ ((
					/* 429L) */ ((
						/* 428L) */ ((
							/* 427L) */ ((
								/* 285L, 51L, 316L, 337L, 876L, 1045L, 54L) */ ((
									/* 286L, 6L, 12L, 317L, 338L, 860L, 1046L, 38L) */ ((
										/* 287L, 4L, 13L, 318L, 339L, 858L, 1047L, 36L) */ ((
											last_1_var_1_22
										) <= (
											last_1_var_1_10
										))
									) && (
										var_1_4
									))
								) ? (
									/* 293L, 49L, 322L, 343L, 875L, 1053L, 53L) */ ((
										/* 294L, 21L, 27L, 323L, 344L, 866L, 1054L, 44L) */ ((
											/* 295L, 19L, 28L, 324L, 345L, 864L, 1055L, 42L) */ ((
												last_1_var_1_10
											) >> (
												var_1_5
											))
										) <= (
											64u
										))
									) ? (
										/* 300L, 35L, 328L, 349L, 870L, 1060L, 48L) */ ((
											var_1_1
										) == (
											/* 300L, 35L, 328L, 349L, 870L, 1060L, 48L) */ ((unsigned char) (
												var_1_6
											))
										))
									) : (
										/* 304L, 47L, 332L, 353L, 874L, 1064L, 52L) */ ((
											var_1_1
										) == (
											/* 304L, 47L, 332L, 353L, 874L, 1064L, 52L) */ ((unsigned char) (
												0
											))
										))
									))
								) : (
									1
								))
							) && (
								/* 311L, 72L, 386L, 399L, 1071L) */ ((
									/* 312L, 58L, 62L, 387L, 400L, 1072L) */ ((
										var_1_1
									) || (
										var_1_6
									))
								) ? (
									/* 315L, 70L, 390L, 403L, 1075L) */ ((
										var_1_7
									) == (
										/* 315L, 70L, 390L, 403L, 1075L) */ ((signed short int) (
											/* 318L, 69L, 393L, 406L, 1078L) */ (min (
												/* 318L, 69L, 393L, 406L, 1078L) */ (
													var_1_5
												) , (
													var_1_8
												)
											))
										))
									))
								) : (
									1
								))
							))
						) && (
							/* 322L, 110L, 444L, 461L, 1082L) */ ((
								var_1_6
							) ? (
								/* 324L, 87L, 446L, 463L, 1084L) */ ((
									var_1_9
								) == (
									/* 324L, 87L, 446L, 463L, 1084L) */ ((signed short int) (
										var_1_5
									))
								))
							) : (
								/* 328L, 108L, 450L, 467L, 1088L) */ ((
									/* 329L, 92L, 98L, 451L, 468L, 1089L) */ ((
										var_1_1
									) && (
										/* 331L, 91L, 100L, 453L, 470L, 1091L) */ ((
											var_1_23
										) != (
											var_1_5
										))
									))
								) ? (
									/* 334L, 106L, 456L, 473L, 1094L) */ ((
										var_1_9
									) == (
										/* 334L, 106L, 456L, 473L, 1094L) */ ((signed short int) (
											var_1_5
										))
									))
								) : (
									1
								))
							))
						))
					) && (
						/* 339L, 140L, 504L, 517L, 1099L) */ ((
							/* 340L, 119L, 125L, 505L, 518L, 1100L) */ ((
								/* 341L, 117L, 126L, 506L, 519L, 1101L) */ ((
									var_1_11
								) - (
									var_1_12
								))
							) >= (
								var_1_20
							))
						) ? (
							/* 345L, 138L, 510L, 523L, 1105L) */ ((
								var_1_1
							) ? (
								/* 347L, 136L, 512L, 525L, 1107L) */ ((
									var_1_10
								) == (
									/* 347L, 136L, 512L, 525L, 1107L) */ ((unsigned long int) (
										var_1_5
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
					/* 352L, 168L, 554L, 566L, 1112L) */ ((
						/* 353L, 150L, 157L, 555L, 567L, 1113L) */ ((
							/* 354L, 148L, 158L, 556L, 568L, 1114L) */ (max (
								/* 354L, 148L, 158L, 556L, 568L, 1114L) */ (
									/* 355L, 146L, 159L, 557L, 569L, 1115L) */ (~ (
										0u
									))
								) , (
									var_1_23
								)
							))
						) > (
							var_1_5
						))
					) ? (
						/* 359L, 166L, 561L, 573L, 1119L) */ ((
							var_1_14
						) == (
							/* 359L, 166L, 561L, 573L, 1119L) */ ((unsigned char) (
								var_1_5
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 364L, 241L, 668L, 713L, 1124L) */ ((
					/* 365L, 175L, 179L, 669L, 714L, 1125L) */ ((
						var_1_5
					) < (
						var_1_23
					))
				) ? (
					/* 368L, 239L, 672L, 717L, 1128L) */ ((
						/* 369L, 184L, 188L, 673L, 718L, 1129L) */ ((
							var_1_6
						) && (
							var_1_1
						))
					) ? (
						/* 372L, 227L, 676L, 721L, 1132L) */ ((
							/* 373L, 195L, 201L, 677L, 722L, 1133L) */ ((
								/* 374L, 193L, 202L, 678L, 723L, 1134L) */ ((
									var_1_16
								) - (
									10
								))
							) == (
								var_1_23
							))
						) ? (
							/* 378L, 215L, 682L, 727L, 1138L) */ ((
								var_1_15
							) == (
								/* 378L, 215L, 682L, 727L, 1138L) */ ((unsigned long int) (
									/* 381L, 214L, 685L, 730L, 1141L) */ (min (
										/* 381L, 214L, 685L, 730L, 1141L) */ (
											/* 382L, 212L, 686L, 731L, 1142L) */ ((
												/* 383L, 210L, 687L, 732L, 1143L) */ ((
													var_1_5
												) + (
													var_1_16
												))
											) + (
												10u
											))
										) , (
											var_1_14
										)
									))
								))
							))
						) : (
							/* 388L, 225L, 692L, 737L, 1148L) */ ((
								var_1_15
							) == (
								/* 388L, 225L, 692L, 737L, 1148L) */ ((unsigned long int) (
									/* 391L, 224L, 695L, 740L, 1151L) */ ((
										/* 392L, 222L, 696L, 741L, 1152L) */ ((
											/* 393L, 220L, 697L, 742L, 1153L) */ (max (
												/* 393L, 220L, 697L, 742L, 1153L) */ (
													var_1_17
												) , (
													var_1_18
												)
											))
										) - (
											var_1_5
										))
									) - (
										var_1_14
									))
								))
							))
						))
					) : (
						/* 398L, 237L, 702L, 747L, 1158L) */ ((
							var_1_15
						) == (
							/* 398L, 237L, 702L, 747L, 1158L) */ ((unsigned long int) (
								/* 401L, 236L, 705L, 750L, 1161L) */ ((
									var_1_14
								) + (
									/* 403L, 235L, 707L, 752L, 1163L) */ ((
										var_1_19
									) - (
										/* 405L, 234L, 709L, 754L, 1165L) */ (min (
											/* 405L, 234L, 709L, 754L, 1165L) */ (
												var_1_16
											) , (
												var_1_5
											)
										))
									))
								))
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 410L, 249L, 771L, 777L, 1170L) */ ((
				var_1_20
			) == (
				/* 410L, 249L, 771L, 777L, 1170L) */ ((float) (
					var_1_21
				))
			))
		))
	) && (
		/* 416L, 259L, 795L, 801L, 1176L) */ ((
			var_1_22
		) == (
			/* 416L, 259L, 795L, 801L, 1176L) */ ((unsigned long int) (
				16u
			))
		))
	))
) && (
	/* 422L, 269L, 819L, 825L, 1182L) */ ((
		var_1_23
	) == (
		/* 422L, 269L, 819L, 825L, 1182L) */ ((unsigned long int) (
			var_1_18
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
