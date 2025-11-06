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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch187Filler_PR_CO.c", 13, "reach_error"); }
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
double var_1_1 = 0.17500000000000004;
unsigned char var_1_2 = 1;
double var_1_5 = 1.6;
double var_1_7 = 31.8;
float var_1_8 = 15.2;
signed char var_1_9 = 1;
signed char var_1_10 = 0;
signed char var_1_11 = 32;
signed char var_1_12 = 16;
unsigned char var_1_13 = 0;
signed short int var_1_14 = -1;
signed short int var_1_15 = 5;
signed long int var_1_16 = 4;
unsigned char var_1_17 = 4;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 32;
float var_1_21 = 0.625;
signed short int var_1_22 = -128;
unsigned short int var_1_23 = 16;
unsigned char var_1_24 = 32;
unsigned char var_1_25 = 1;
float var_1_26 = 1000000000.3;
unsigned char var_1_27 = 0;
float var_1_28 = 500.95;
unsigned char var_1_29 = 8;
float var_1_30 = 10.75;
float var_1_31 = 4.5;
float var_1_32 = 24.6;
unsigned char var_1_33 = 5;
unsigned char var_1_34 = 4;
unsigned char var_1_35 = 0;
signed long int var_1_36 = 5;
unsigned short int var_1_37 = 2;
unsigned short int var_1_38 = 62493;
signed short int var_1_39 = 1;
double var_1_40 = 0.0;
double var_1_41 = 3.7;
double var_1_42 = 1.6;
unsigned long int var_1_43 = 500;
unsigned long int var_1_44 = 8;
unsigned long int var_1_45 = 1000000;

// Calibration values

// Last'ed variables
double last_1_var_1_7 = 31.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch187Filler_PR_CO
	/* 934L, 153L, 513L, 524L) */ if (var_1_2) {
		/* 936L, 152L, 515L, 526L) */ var_1_9 = (
			/* 939L, 151L, 518L, 529L) */ (max (
				/* 939L, 151L, 518L, 529L) */ (
					/* 940L, 149L, 519L, 530L) */ (max (
						/* 940L, 149L, 519L, 530L) */ (
							var_1_10
						) , (
							var_1_11
						)
					))
				) , (
					var_1_12
				)
			))
		);
	}


	// From: CodeObject1
	/* 256L, 12L) */ if (var_1_27) {
		/* 258L, 11L) */ var_1_26 = (
			/* 261L, 10L) */ ((
				/* 262L, 8L) */ (abs (
					var_1_28
				))
			) + (
				-0.9f
			))
		);
	}


	// From: Req4Batch187Filler_PR_CO
	signed long int stepLocal_0 = /* 946L, 166L, 172L, 562L, 585L) */ ((/* 947L, 164L, 173L, 563L, 586L) */ ((var_1_10) + (1000000000))) / (var_1_16));
	/* 968L, 198L, 557L, 580L) */ if (/* 955L, 167L, 168L, 558L, 581L) */ ((/* 954L, 161L, 169L, 559L, 582L) */ ((var_1_14) - (var_1_15))) > (stepLocal_0))) {
		/* 961L, 191L, 567L, 590L) */ var_1_13 = (
			/* 960L, 190L, 570L, 593L) */ ((
				var_1_17
			) + (
				var_1_18
			))
		);
	} else {
		/* 967L, 197L, 573L, 596L) */ var_1_13 = (
			/* 966L, 196L, 576L, 599L) */ ((
				var_1_19
			) - (
				var_1_20
			))
		);
	}


	// From: CodeObject4
	/* 382L, 110L) */ if (/* 383L, 93L, 94L) */ ((var_1_13) > (var_1_35))) {
		/* 386L, 109L) */ var_1_37 = (
			/* 389L, 108L) */ (min (
				/* 389L, 108L) */ (
					var_1_35
				) , (
					/* 391L, 107L) */ ((
						var_1_38
					) - (
						/* 393L, 106L) */ ((
							var_1_33
						) + (
							var_1_34
						))
					))
				)
			))
		);
	}


	// From: Req5Batch187Filler_PR_CO
	signed long int stepLocal_1 = /* 973L, 212L, 219L, 655L, 675L) */ ((var_1_18) << (/* 975L, 211L, 221L, 657L, 677L) */ ((1) - (0))));
	/* 992L, 242L, 649L, 669L) */ if (/* 983L, 213L, 214L, 650L, 670L) */ ((/* 982L, 207L, 215L, 651L, 671L) */ ((/* 980L, 205L, 216L, 652L, 672L) */ (~ (var_1_17))) / (var_1_19))) >= (stepLocal_1))) {
		/* 987L, 237L, 660L, 680L) */ var_1_21 = (
			25.8f
		);
	} else {
		/* 991L, 241L, 664L, 684L) */ var_1_21 = (
			var_1_5
		);
	}


	// From: CodeObject2
	/* 350L, 77L) */ if (/* 351L, 28L, 29L) */ ((var_1_26) > (/* 353L, 27L, 31L) */ ((var_1_28) + (/* 355L, 26L, 33L) */ ((var_1_30) * (var_1_31))))))) {
		/* 358L, 75L) */ if (/* 359L, 49L, 50L) */ ((var_1_30) > (/* 361L, 48L, 52L) */ ((/* 362L, 46L, 53L) */ (min (/* 362L, 46L, 53L) */ (var_1_28) , (var_1_26)))) / (var_1_32))))) {
			/* 366L, 74L) */ var_1_29 = (
				/* 369L, 73L) */ ((
					/* 370L, 70L) */ (max (
						/* 370L, 70L) */ (
							/* 371L, 68L) */ (max (
								/* 371L, 68L) */ (
									var_1_33
								) , (
									1
								)
							))
						) , (
							var_1_34
						)
					))
				) + (
					/* 375L, 72L) */ (abs (
						var_1_35
					))
				))
			);
		}
	}


	// From: Req7Batch187Filler_PR_CO
	/* 1026L, 308L, 818L, 824L) */ var_1_23 = (
		var_1_18
	);


	// From: Req8Batch187Filler_PR_CO
	/* 1032L, 318L, 842L, 848L) */ var_1_24 = (
		32
	);


	// From: CodeObject3
	/* 378L, 86L) */ var_1_36 = (
		-2
	);


	// From: Req9Batch187Filler_PR_CO
	/* 1038L, 328L, 866L, 872L) */ var_1_25 = (
		var_1_18
	);


	// From: CodeObject5
	/* 396L, 172L) */ if (/* 397L, 120L, 121L) */ ((/* 398L, 118L, 122L) */ ((var_1_28) + (/* 400L, 117L, 124L) */ (max (/* 400L, 117L, 124L) */ (var_1_1) , (var_1_7)))))) < (var_1_7))) {
		/* 404L, 170L) */ if (/* 405L, 145L, 146L) */ ((/* 406L, 142L, 147L) */ ((/* 407L, 140L, 148L) */ ((var_1_40) - (var_1_41))) - (var_1_42))) > (/* 411L, 144L, 152L) */ (- (var_1_1))))) {
			/* 413L, 165L) */ var_1_39 = (
				var_1_35
			);
		} else {
			/* 417L, 169L) */ var_1_39 = (
				var_1_13
			);
		}
	}


	// From: Req2Batch187Filler_PR_CO
	/* 917L, 132L, 439L, 458L) */ if (/* 918L, 106L, 107L, 440L, 459L) */ ((/* 919L, 104L, 108L, 441L, 460L) */ ((last_1_var_1_7) / (var_1_8))) < (var_1_21))) {
		/* 924L, 130L, 446L, 465L) */ if (/* 925L, 119L, 120L, 447L, 466L) */ ((last_1_var_1_7) < (var_1_5))) {
			/* 929L, 129L, 451L, 470L) */ var_1_7 = (
				var_1_5
			);
		}
	}


	// From: CodeObject6
	/* 421L, 251L) */ if (/* 422L, 178L, 179L) */ ((var_1_40) < (var_1_28))) {
		/* 425L, 245L) */ if (/* 426L, 187L, 188L) */ ((var_1_33) < (var_1_23))) {
			/* 429L, 239L) */ if (/* 430L, 196L, 197L) */ ((var_1_44) != (5u))) {
				/* 433L, 228L) */ if (/* 434L, 207L, 208L) */ ((var_1_40) > (/* 436L, 206L, 210L) */ ((var_1_21) / (var_1_32))))) {
					/* 439L, 222L) */ var_1_43 = (
						/* 442L, 221L) */ (abs (
							var_1_24
						))
					);
				} else {
					/* 444L, 227L) */ var_1_43 = (
						/* 447L, 226L) */ (abs (
							var_1_23
						))
					);
				}
			} else {
				/* 449L, 237L) */ if (var_1_27) {
					/* 451L, 236L) */ var_1_43 = (
						var_1_23
					);
				}
			}
		} else {
			/* 455L, 244L) */ var_1_43 = (
				var_1_45
			);
		}
	} else {
		/* 459L, 250L) */ var_1_43 = (
			var_1_38
		);
	}


	// From: Req6Batch187Filler_PR_CO
	signed long int stepLocal_3 = /* 1004L, 251L, 257L, 731L, 753L) */ ((var_1_25) % (/* 1006L, 250L, 259L, 733L, 755L) */ (abs (var_1_19))));
	signed long int stepLocal_2 = /* 997L, 276L, 280L, 740L, 762L) */ ((/* 998L, 274L, 281L, 741L, 763L) */ ((2) ^ (var_1_19))) + (var_1_16));
	/* 1020L, 299L, 729L, 751L) */ if (/* 1012L, 255L, 256L, 730L, 752L) */ ((stepLocal_3) >= (/* 1011L, 254L, 261L, 735L, 757L) */ ((var_1_24) * (var_1_16))))) {
		/* 1019L, 297L, 738L, 760L) */ if (/* 1014L, 278L, 279L, 739L, 761L) */ ((stepLocal_2) < (var_1_11))) {
			/* 1018L, 296L, 746L, 768L) */ var_1_22 = (
				var_1_18
			);
		}
	}


	// From: Req1Batch187Filler_PR_CO
	/* 889L, 96L, 333L, 359L) */ if (var_1_2) {
		/* 891L, 94L, 335L, 361L) */ if (/* 892L, 7L, 8L, 336L, 362L) */ ((var_1_21) != (var_1_7))) {
			/* 895L, 17L, 339L, 365L) */ var_1_1 = (
				var_1_5
			);
		} else {
			/* 899L, 92L, 343L, 369L) */ if (/* 900L, 23L, 24L, 344L, 370L) */ ((/* 901L, 21L, 25L, 345L, 371L) */ ((/* 902L, 19L, 26L, 346L, 372L) */ (- (var_1_21))) * (var_1_7))) < (var_1_7))) {
				/* 906L, 39L, 350L, 376L) */ var_1_1 = (
					var_1_5
				);
			} else {
				/* 910L, 91L, 354L, 380L) */ var_1_1 = (
					199.4
				);
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	assume_abort_if_not(var_1_8 != 0.0F);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -127);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= -1);
	assume_abort_if_not(var_1_14 <= 32767);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= -2147483648);
	assume_abort_if_not(var_1_16 <= 2147483647);
	assume_abort_if_not(var_1_16 != 0);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 127);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	assume_abort_if_not(var_1_32 != 0.0F);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 127);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 127);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 32767);
	assume_abort_if_not(var_1_38 <= 65534);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= 4611686.018427388000e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427388000e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 4294967295);
	var_1_45 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
}

int property(void) {
	if (var_1_2) {
		if (/* 466L, 7L, 11L, 388L, 414L, 1046L) */ ((var_1_21) != (var_1_7))) {
		} else {
			if (/* 474L, 23L, 30L, 396L, 422L, 1054L) */ ((/* 475L, 21L, 31L, 397L, 423L, 1055L) */ ((/* 476L, 19L, 32L, 398L, 424L, 1056L) */ (- (var_1_21))) * (var_1_7))) < (var_1_7))) {
			} else {
			}
		}
	}
	if (/* 492L, 106L, 112L, 478L, 497L, 1072L) */ ((/* 493L, 104L, 113L, 479L, 498L, 1073L) */ ((last_1_var_1_7) / (var_1_8))) < (var_1_21))) {
		if (/* 499L, 119L, 123L, 485L, 504L, 1079L) */ ((last_1_var_1_7) < (var_1_5))) {
		}
	}
	if (var_1_2) {
	}
	if (/* 520L, 167L, 177L, 604L, 627L, 1100L) */ ((/* 521L, 161L, 178L, 605L, 628L, 1101L) */ ((var_1_14) - (var_1_15))) > (/* 524L, 166L, 181L, 608L, 631L, 1104L) */ ((/* 525L, 164L, 182L, 609L, 632L, 1105L) */ ((var_1_10) + (1000000000))) / (var_1_16))))) {
	} else {
	}
	if (/* 543L, 213L, 224L, 690L, 710L, 1123L) */ ((/* 544L, 207L, 225L, 691L, 711L, 1124L) */ ((/* 545L, 205L, 226L, 692L, 712L, 1125L) */ (~ (var_1_17))) / (var_1_19))) >= (/* 548L, 212L, 229L, 695L, 715L, 1128L) */ ((var_1_18) << (/* 550L, 211L, 231L, 697L, 717L, 1130L) */ ((1) - (0))))))) {
	} else {
	}
	if (/* 563L, 255L, 264L, 774L, 796L, 1143L) */ ((/* 564L, 251L, 265L, 775L, 797L, 1144L) */ ((var_1_25) % (/* 566L, 250L, 267L, 777L, 799L, 1146L) */ (abs (var_1_19))))) >= (/* 568L, 254L, 269L, 779L, 801L, 1148L) */ ((var_1_24) * (var_1_16))))) {
		if (/* 572L, 278L, 286L, 783L, 805L, 1152L) */ ((/* 573L, 276L, 287L, 784L, 806L, 1153L) */ ((/* 574L, 274L, 288L, 785L, 807L, 1154L) */ ((2) ^ (var_1_19))) + (var_1_16))) < (var_1_11))) {
		}
	}
	return /* 609L) */ ((
	/* 608L) */ ((
		/* 607L) */ ((
			/* 606L) */ ((
				/* 605L) */ ((
					/* 604L) */ ((
						/* 603L) */ ((
							/* 602L) */ ((
								/* 463L, 97L, 385L, 411L, 1043L) */ ((
									var_1_2
								) ? (
									/* 465L, 95L, 387L, 413L, 1045L) */ ((
										/* 466L, 7L, 11L, 388L, 414L, 1046L) */ ((
											var_1_21
										) != (
											var_1_7
										))
									) ? (
										/* 469L, 17L, 391L, 417L, 1049L) */ ((
											var_1_1
										) == (
											/* 469L, 17L, 391L, 417L, 1049L) */ ((double) (
												var_1_5
											))
										))
									) : (
										/* 473L, 93L, 395L, 421L, 1053L) */ ((
											/* 474L, 23L, 30L, 396L, 422L, 1054L) */ ((
												/* 475L, 21L, 31L, 397L, 423L, 1055L) */ ((
													/* 476L, 19L, 32L, 398L, 424L, 1056L) */ (- (
														var_1_21
													))
												) * (
													var_1_7
												))
											) < (
												var_1_7
											))
										) ? (
											/* 480L, 39L, 402L, 428L, 1060L) */ ((
												var_1_1
											) == (
												/* 480L, 39L, 402L, 428L, 1060L) */ ((double) (
													var_1_5
												))
											))
										) : (
											/* 484L, 91L, 406L, 432L, 1064L) */ ((
												var_1_1
											) == (
												/* 484L, 91L, 406L, 432L, 1064L) */ ((double) (
													199.4
												))
											))
										))
									))
								) : (
									1
								))
							) && (
								/* 491L, 133L, 477L, 496L, 1071L) */ ((
									/* 492L, 106L, 112L, 478L, 497L, 1072L) */ ((
										/* 493L, 104L, 113L, 479L, 498L, 1073L) */ ((
											last_1_var_1_7
										) / (
											var_1_8
										))
									) < (
										var_1_21
									))
								) ? (
									/* 498L, 131L, 484L, 503L, 1078L) */ ((
										/* 499L, 119L, 123L, 485L, 504L, 1079L) */ ((
											last_1_var_1_7
										) < (
											var_1_5
										))
									) ? (
										/* 503L, 129L, 489L, 508L, 1083L) */ ((
											var_1_7
										) == (
											/* 503L, 129L, 489L, 508L, 1083L) */ ((double) (
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
							/* 508L, 154L, 535L, 546L, 1088L) */ ((
								var_1_2
							) ? (
								/* 510L, 152L, 537L, 548L, 1090L) */ ((
									var_1_9
								) == (
									/* 510L, 152L, 537L, 548L, 1090L) */ ((signed char) (
										/* 513L, 151L, 540L, 551L, 1093L) */ (max (
											/* 513L, 151L, 540L, 551L, 1093L) */ (
												/* 514L, 149L, 541L, 552L, 1094L) */ (max (
													/* 514L, 149L, 541L, 552L, 1094L) */ (
														var_1_10
													) , (
														var_1_11
													)
												))
											) , (
												var_1_12
											)
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 519L, 199L, 603L, 626L, 1099L) */ ((
							/* 520L, 167L, 177L, 604L, 627L, 1100L) */ ((
								/* 521L, 161L, 178L, 605L, 628L, 1101L) */ ((
									var_1_14
								) - (
									var_1_15
								))
							) > (
								/* 524L, 166L, 181L, 608L, 631L, 1104L) */ ((
									/* 525L, 164L, 182L, 609L, 632L, 1105L) */ ((
										var_1_10
									) + (
										1000000000
									))
								) / (
									var_1_16
								))
							))
						) ? (
							/* 529L, 191L, 613L, 636L, 1109L) */ ((
								var_1_13
							) == (
								/* 529L, 191L, 613L, 636L, 1109L) */ ((unsigned char) (
									/* 532L, 190L, 616L, 639L, 1112L) */ ((
										var_1_17
									) + (
										var_1_18
									))
								))
							))
						) : (
							/* 535L, 197L, 619L, 642L, 1115L) */ ((
								var_1_13
							) == (
								/* 535L, 197L, 619L, 642L, 1115L) */ ((unsigned char) (
									/* 538L, 196L, 622L, 645L, 1118L) */ ((
										var_1_19
									) - (
										var_1_20
									))
								))
							))
						))
					))
				) && (
					/* 542L, 243L, 689L, 709L, 1122L) */ ((
						/* 543L, 213L, 224L, 690L, 710L, 1123L) */ ((
							/* 544L, 207L, 225L, 691L, 711L, 1124L) */ ((
								/* 545L, 205L, 226L, 692L, 712L, 1125L) */ (~ (
									var_1_17
								))
							) / (
								var_1_19
							))
						) >= (
							/* 548L, 212L, 229L, 695L, 715L, 1128L) */ ((
								var_1_18
							) << (
								/* 550L, 211L, 231L, 697L, 717L, 1130L) */ ((
									1
								) - (
									0
								))
							))
						))
					) ? (
						/* 553L, 237L, 700L, 720L, 1133L) */ ((
							var_1_21
						) == (
							/* 553L, 237L, 700L, 720L, 1133L) */ ((float) (
								25.8f
							))
						))
					) : (
						/* 557L, 241L, 704L, 724L, 1137L) */ ((
							var_1_21
						) == (
							/* 557L, 241L, 704L, 724L, 1137L) */ ((float) (
								var_1_5
							))
						))
					))
				))
			) && (
				/* 562L, 300L, 773L, 795L, 1142L) */ ((
					/* 563L, 255L, 264L, 774L, 796L, 1143L) */ ((
						/* 564L, 251L, 265L, 775L, 797L, 1144L) */ ((
							var_1_25
						) % (
							/* 566L, 250L, 267L, 777L, 799L, 1146L) */ (abs (
								var_1_19
							))
						))
					) >= (
						/* 568L, 254L, 269L, 779L, 801L, 1148L) */ ((
							var_1_24
						) * (
							var_1_16
						))
					))
				) ? (
					/* 571L, 298L, 782L, 804L, 1151L) */ ((
						/* 572L, 278L, 286L, 783L, 805L, 1152L) */ ((
							/* 573L, 276L, 287L, 784L, 806L, 1153L) */ ((
								/* 574L, 274L, 288L, 785L, 807L, 1154L) */ ((
									2
								) ^ (
									var_1_19
								))
							) + (
								var_1_16
							))
						) < (
							var_1_11
						))
					) ? (
						/* 579L, 296L, 790L, 812L, 1159L) */ ((
							var_1_22
						) == (
							/* 579L, 296L, 790L, 812L, 1159L) */ ((signed short int) (
								var_1_18
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
			/* 585L, 308L, 830L, 836L, 1165L) */ ((
				var_1_23
			) == (
				/* 585L, 308L, 830L, 836L, 1165L) */ ((unsigned short int) (
					var_1_18
				))
			))
		))
	) && (
		/* 591L, 318L, 854L, 860L, 1171L) */ ((
			var_1_24
		) == (
			/* 591L, 318L, 854L, 860L, 1171L) */ ((unsigned char) (
				32
			))
		))
	))
) && (
	/* 597L, 328L, 878L, 884L, 1177L) */ ((
		var_1_25
	) == (
		/* 597L, 328L, 878L, 884L, 1177L) */ ((unsigned char) (
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
