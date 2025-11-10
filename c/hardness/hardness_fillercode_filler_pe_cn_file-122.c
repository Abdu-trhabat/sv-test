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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch122Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 8;
unsigned char var_1_4 = 128;
unsigned char var_1_5 = 64;
unsigned char var_1_6 = 4;
unsigned char var_1_7 = 32;
double var_1_8 = 49.5;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
double var_1_11 = 5.375;
unsigned short int var_1_12 = 5;
unsigned long int var_1_13 = 1;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 0;
signed short int var_1_16 = -8;
signed short int var_1_18 = 2;
double var_1_19 = 32.35;
signed short int var_1_20 = -1;
signed long int var_1_21 = 10;
double var_1_22 = 25.45;
unsigned long int var_1_23 = 5;
signed long int var_1_24 = -1;
signed short int var_1_25 = -2;
signed short int var_1_26 = 256;
double var_1_27 = 16.6;
double var_1_28 = -0.5;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 1;
signed short int var_1_31 = -8;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned long int var_1_34 = 50;
signed short int var_1_35 = 28268;
double var_1_36 = 25.4;
signed short int var_1_37 = 2;
unsigned char var_1_38 = 5;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_13 = 1;
unsigned char last_1_var_1_14 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch122Filler_PE_CN
	/* 15L, 129L, 482L, 499L, 876L, 945L) */ if (/* 10L, 104L, 105L, 483L, 500L, 871L, 946L) */ ((/* 3L, 98L, 106L, 484L, 501L, 864L, 947L) */ ((var_1_5) / (/* 2L, 97L, 108L, 486L, 503L, 863L, 949L) */ (abs (var_1_4))))) <= (/* 9L, 103L, 110L, 488L, 505L, 870L, 951L) */ ((var_1_6) * (/* 8L, 102L, 112L, 490L, 507L, 869L, 953L) */ (min (/* 8L, 102L, 112L, 490L, 507L, 869L, 953L) */ (var_1_7) , (last_1_var_1_13)))))))) {
		/* 14L, 128L, 493L, 510L, 875L, 957L) */ var_1_12 = (
			var_1_5
		);
	}


	// From: Req2Batch122Filler_PE_CN
	/* 931L, 85L, 423L, 438L) */ if (/* 932L, 66L, 67L, 424L, 439L) */ ((/* 933L, 62L, 68L, 425L, 440L) */ ((var_1_9) && (var_1_10))) || (/* 936L, 65L, 71L, 428L, 443L) */ ((var_1_5) <= (32))))) {
		/* 939L, 84L, 431L, 446L) */ var_1_8 = (
			var_1_11
		);
	}


	// From: Req5Batch122Filler_PE_CN
	unsigned char stepLocal_0 = var_1_9;
	/* 1000L, 199L, 601L, 626L) */ if (/* 980L, 166L, 167L, 602L, 627L) */ ((stepLocal_0) && (last_1_var_1_14))) {
		/* 995L, 193L, 606L, 631L) */ if (/* 983L, 175L, 176L, 607L, 632L) */ ((var_1_8) < (var_1_11))) {
			/* 990L, 188L, 610L, 635L) */ var_1_14 = (
				/* 989L, 187L, 613L, 638L) */ ((
					last_1_var_1_14
				) && (
					var_1_15
				))
			);
		} else {
			/* 994L, 192L, 617L, 642L) */ var_1_14 = (
				var_1_15
			);
		}
	} else {
		/* 999L, 198L, 621L, 646L) */ var_1_14 = (
			1
		);
	}


	// From: Req7Batch122Filler_PE_CN
	/* 1043L, 258L, 838L, 844L) */ var_1_18 = (
		var_1_6
	);


	// From: Req4Batch122Filler_PE_CN
	/* 966L, 150L, 553L, 566L) */ if (/* 967L, 139L, 140L, 554L, 567L) */ ((var_1_18) > (var_1_12))) {
		/* 970L, 149L, 557L, 570L) */ var_1_13 = (
			var_1_6
		);
	}


	// From: Req1Batch122Filler_PE_CN
	/* 899L, 50L, 265L, 297L) */ if (/* 900L, 6L, 7L, 266L, 298L) */ ((/* 901L, 4L, 8L, 267L, 299L) */ (- (var_1_12))) > (5))) {
		/* 904L, 44L, 270L, 302L) */ if (/* 905L, 19L, 20L, 271L, 303L) */ ((/* 906L, 17L, 21L, 272L, 304L) */ ((16) << (var_1_12))) < (var_1_13))) {
			/* 910L, 39L, 276L, 308L) */ var_1_1 = (
				/* 913L, 38L, 279L, 311L) */ (max (
					/* 913L, 38L, 279L, 311L) */ (
						/* 914L, 36L, 280L, 312L) */ ((
							var_1_4
						) - (
							/* 916L, 35L, 282L, 314L) */ ((
								var_1_5
							) - (
								var_1_6
							))
						))
					) , (
						var_1_7
					)
				))
			);
		} else {
			/* 920L, 43L, 286L, 318L) */ var_1_1 = (
				var_1_6
			);
		}
	} else {
		/* 924L, 49L, 290L, 322L) */ var_1_1 = (
			0
		);
	}


	// From: Req6Batch122Filler_PE_CN
	unsigned char stepLocal_1 = var_1_5;
	/* 1038L, 249L, 701L, 735L) */ if (var_1_15) {
		/* 1031L, 241L, 703L, 737L) */ if (/* 1009L, 210L, 211L, 704L, 738L) */ ((var_1_13) > (stepLocal_1))) {
			/* 1016L, 225L, 707L, 741L) */ if (var_1_14) {
				/* 1015L, 224L, 709L, 743L) */ var_1_16 = (
					/* 1014L, 223L, 712L, 746L) */ (abs (
						5
					))
				);
			}
		} else {
			/* 1030L, 240L, 714L, 748L) */ var_1_16 = (
				/* 1029L, 239L, 717L, 751L) */ ((
					/* 1021L, 231L, 718L, 752L) */ ((
						50
					) + (
						var_1_5
					))
				) + (
					/* 1028L, 238L, 721L, 755L) */ ((
						/* 1024L, 234L, 722L, 756L) */ (min (
							/* 1024L, 234L, 722L, 756L) */ (
								var_1_13
							) , (
								var_1_6
							)
						))
					) + (
						/* 1027L, 237L, 725L, 759L) */ ((
							var_1_7
						) - (
							var_1_4
						))
					))
				))
			);
		}
	} else {
		/* 1037L, 248L, 728L, 762L) */ var_1_16 = (
			/* 1036L, 247L, 731L, 765L) */ (max (
				/* 1036L, 247L, 731L, 765L) */ (
					-128
				) , (
					var_1_7
				)
			))
		);
	}


	// From: CodeObject1
	/* 64L) */ if (/* 45L, 44L) */ ((/* 46L, 40L) */ ((-2) ^ (var_1_20))) >= (/* 49L, 43L) */ ((5) - (var_1_21))))) {
		/* 63L) */ var_1_19 = (
			/* 62L) */ (abs (
				var_1_22
			))
		);
	}


	// From: CodeObject2
	/* 71L) */ var_1_23 = (
		var_1_21
	);


	// From: CodeObject3
	/* 79L) */ var_1_24 = (
		var_1_20
	);


	// From: CodeObject4
	/* 87L) */ var_1_25 = (
		var_1_26
	);


	// From: CodeObject5
	/* 110L) */ if (/* 95L, 94L) */ ((var_1_20) > (var_1_26))) {
		/* 109L) */ var_1_27 = (
			/* 108L) */ (abs (
				/* 107L) */ (min (
					/* 107L) */ (
						/* 105L) */ (min (
							/* 105L) */ (
								var_1_22
							) , (
								var_1_28
							)
						))
					) , (
						32.5
					)
				))
			))
		);
	}


	// From: CodeObject6
	/* 165L) */ if (/* 122L, 121L) */ ((5) < (var_1_23))) {
		/* 163L) */ if (/* 135L, 134L) */ ((var_1_20) > (/* 137L, 133L) */ ((/* 138L, 131L) */ ((var_1_24) ^ (var_1_26))) / (var_1_31))))) {
			/* 156L) */ var_1_29 = (
				/* 155L) */ ((
					var_1_32
				) && (
					/* 154L) */ (! (
						/* 153L) */ (! (
							var_1_33
						))
					))
				))
			);
		} else {
			/* 162L) */ var_1_29 = (
				/* 161L) */ ((
					var_1_30
				) || (
					var_1_33
				))
			);
		}
	}


	// From: CodeObject7
	/* 229L) */ if (/* 176L, 175L) */ ((var_1_26) >= (/* 178L, 174L) */ ((/* 179L, 172L) */ ((var_1_35) - (16))) - (32))))) {
		/* 212L) */ if (/* 196L, 195L) */ ((/* 197L, 192L) */ ((var_1_27) / (var_1_36))) < (/* 200L, 194L) */ (abs (var_1_22))))) {
			/* 211L) */ var_1_34 = (
				0u
			);
		}
	} else {
		/* 227L) */ if (var_1_29) {
			/* 221L) */ var_1_34 = (
				/* 220L) */ (abs (
					var_1_35
				))
			);
		} else {
			/* 226L) */ var_1_34 = (
				/* 225L) */ (abs (
					var_1_21
				))
			);
		}
	}


	// From: CodeObject8
	/* 277L) */ if (var_1_33) {
		/* 260L) */ if (/* 242L, 241L) */ ((/* 243L, 239L) */ ((var_1_31) / (/* 245L, 238L) */ (abs (var_1_38))))) < (var_1_34))) {
			/* 259L) */ var_1_37 = (
				/* 258L) */ (max (
					/* 258L) */ (
						var_1_26
					) , (
						-10
					)
				))
			);
		}
	} else {
		/* 275L) */ if (/* 265L, 264L) */ ((var_1_20) < (var_1_38))) {
			/* 274L) */ var_1_37 = (
				var_1_26
			);
		}
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 63);
	assume_abort_if_not(var_1_5 <= 127);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 63);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= -32768);
	assume_abort_if_not(var_1_20 <= 32767);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= -32767);
	assume_abort_if_not(var_1_26 <= 32766);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854766000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= -32768);
	assume_abort_if_not(var_1_31 <= 32767);
	assume_abort_if_not(var_1_31 != 0);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= 16383);
	assume_abort_if_not(var_1_35 <= 32767);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	assume_abort_if_not(var_1_36 != 0.0F);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 255);
	assume_abort_if_not(var_1_38 != 0);
}



void updateLastVariables(void) {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_14 = var_1_14;
}

int property(void) {
	if (/* 286L, 6L, 11L, 330L, 362L, 1051L) */ ((/* 287L, 4L, 12L, 331L, 363L, 1052L) */ (- (var_1_12))) > (5))) {
		if (/* 291L, 19L, 25L, 335L, 367L, 1056L) */ ((/* 292L, 17L, 26L, 336L, 368L, 1057L) */ ((16) << (var_1_12))) < (var_1_13))) {
		} else {
		}
	} else {
	}
	if (/* 318L, 66L, 74L, 454L, 469L, 1083L) */ ((/* 319L, 62L, 75L, 455L, 470L, 1084L) */ ((var_1_9) && (var_1_10))) || (/* 322L, 65L, 78L, 458L, 473L, 1087L) */ ((var_1_5) <= (32))))) {
	}
	if (/* 332L, 104L, 115L, 517L, 534L, 889L, 1097L, 28L) */ ((/* 333L, 98L, 116L, 518L, 535L, 882L, 1098L, 21L) */ ((var_1_5) / (/* 335L, 97L, 118L, 520L, 537L, 881L, 1100L, 20L) */ (abs (var_1_4))))) <= (/* 337L, 103L, 120L, 522L, 539L, 888L, 1102L, 27L) */ ((var_1_6) * (/* 339L, 102L, 122L, 524L, 541L, 887L, 1104L, 26L) */ (min (/* 339L, 102L, 122L, 524L, 541L, 887L, 1104L, 26L) */ (var_1_7) , (last_1_var_1_13)))))))) {
	}
	if (/* 353L, 139L, 143L, 580L, 593L, 1118L) */ ((var_1_18) > (var_1_12))) {
	}
	if (/* 362L, 166L, 170L, 652L, 677L, 1127L) */ ((var_1_9) && (last_1_var_1_14))) {
		if (/* 367L, 175L, 179L, 657L, 682L, 1132L) */ ((var_1_8) < (var_1_11))) {
		} else {
		}
	} else {
	}
	if (var_1_15) {
		if (/* 389L, 210L, 214L, 772L, 806L, 1154L) */ ((var_1_13) > (var_1_5))) {
			if (var_1_14) {
			}
		} else {
		}
	} else {
	}
	return /* 431L) */ ((
	/* 430L) */ ((
		/* 429L) */ ((
			/* 428L) */ ((
				/* 427L) */ ((
					/* 426L) */ ((
						/* 285L, 51L, 329L, 361L, 1050L) */ ((
							/* 286L, 6L, 11L, 330L, 362L, 1051L) */ ((
								/* 287L, 4L, 12L, 331L, 363L, 1052L) */ (- (
									var_1_12
								))
							) > (
								5
							))
						) ? (
							/* 290L, 45L, 334L, 366L, 1055L) */ ((
								/* 291L, 19L, 25L, 335L, 367L, 1056L) */ ((
									/* 292L, 17L, 26L, 336L, 368L, 1057L) */ ((
										16
									) << (
										var_1_12
									))
								) < (
									var_1_13
								))
							) ? (
								/* 296L, 39L, 340L, 372L, 1061L) */ ((
									var_1_1
								) == (
									/* 296L, 39L, 340L, 372L, 1061L) */ ((unsigned char) (
										/* 299L, 38L, 343L, 375L, 1064L) */ (max (
											/* 299L, 38L, 343L, 375L, 1064L) */ (
												/* 300L, 36L, 344L, 376L, 1065L) */ ((
													var_1_4
												) - (
													/* 302L, 35L, 346L, 378L, 1067L) */ ((
														var_1_5
													) - (
														var_1_6
													))
												))
											) , (
												var_1_7
											)
										))
									))
								))
							) : (
								/* 306L, 43L, 350L, 382L, 1071L) */ ((
									var_1_1
								) == (
									/* 306L, 43L, 350L, 382L, 1071L) */ ((unsigned char) (
										var_1_6
									))
								))
							))
						) : (
							/* 310L, 49L, 354L, 386L, 1075L) */ ((
								var_1_1
							) == (
								/* 310L, 49L, 354L, 386L, 1075L) */ ((unsigned char) (
									0
								))
							))
						))
					) && (
						/* 317L, 86L, 453L, 468L, 1082L) */ ((
							/* 318L, 66L, 74L, 454L, 469L, 1083L) */ ((
								/* 319L, 62L, 75L, 455L, 470L, 1084L) */ ((
									var_1_9
								) && (
									var_1_10
								))
							) || (
								/* 322L, 65L, 78L, 458L, 473L, 1087L) */ ((
									var_1_5
								) <= (
									32
								))
							))
						) ? (
							/* 325L, 84L, 461L, 476L, 1090L) */ ((
								var_1_8
							) == (
								/* 325L, 84L, 461L, 476L, 1090L) */ ((double) (
									var_1_11
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 331L, 130L, 516L, 533L, 894L, 1096L, 33L) */ ((
						/* 332L, 104L, 115L, 517L, 534L, 889L, 1097L, 28L) */ ((
							/* 333L, 98L, 116L, 518L, 535L, 882L, 1098L, 21L) */ ((
								var_1_5
							) / (
								/* 335L, 97L, 118L, 520L, 537L, 881L, 1100L, 20L) */ (abs (
									var_1_4
								))
							))
						) <= (
							/* 337L, 103L, 120L, 522L, 539L, 888L, 1102L, 27L) */ ((
								var_1_6
							) * (
								/* 339L, 102L, 122L, 524L, 541L, 887L, 1104L, 26L) */ (min (
									/* 339L, 102L, 122L, 524L, 541L, 887L, 1104L, 26L) */ (
										var_1_7
									) , (
										last_1_var_1_13
									)
								))
							))
						))
					) ? (
						/* 343L, 128L, 527L, 544L, 893L, 1108L, 32L) */ ((
							var_1_12
						) == (
							/* 343L, 128L, 527L, 544L, 893L, 1108L, 32L) */ ((unsigned short int) (
								var_1_5
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 352L, 151L, 579L, 592L, 1117L) */ ((
					/* 353L, 139L, 143L, 580L, 593L, 1118L) */ ((
						var_1_18
					) > (
						var_1_12
					))
				) ? (
					/* 356L, 149L, 583L, 596L, 1121L) */ ((
						var_1_13
					) == (
						/* 356L, 149L, 583L, 596L, 1121L) */ ((unsigned long int) (
							var_1_6
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 361L, 200L, 651L, 676L, 1126L) */ ((
				/* 362L, 166L, 170L, 652L, 677L, 1127L) */ ((
					var_1_9
				) && (
					last_1_var_1_14
				))
			) ? (
				/* 366L, 194L, 656L, 681L, 1131L) */ ((
					/* 367L, 175L, 179L, 657L, 682L, 1132L) */ ((
						var_1_8
					) < (
						var_1_11
					))
				) ? (
					/* 370L, 188L, 660L, 685L, 1135L) */ ((
						var_1_14
					) == (
						/* 370L, 188L, 660L, 685L, 1135L) */ ((unsigned char) (
							/* 373L, 187L, 663L, 688L, 1138L) */ ((
								last_1_var_1_14
							) && (
								var_1_15
							))
						))
					))
				) : (
					/* 377L, 192L, 667L, 692L, 1142L) */ ((
						var_1_14
					) == (
						/* 377L, 192L, 667L, 692L, 1142L) */ ((unsigned char) (
							var_1_15
						))
					))
				))
			) : (
				/* 381L, 198L, 671L, 696L, 1146L) */ ((
					var_1_14
				) == (
					/* 381L, 198L, 671L, 696L, 1146L) */ ((unsigned char) (
						1
					))
				))
			))
		))
	) && (
		/* 386L, 250L, 769L, 803L, 1151L) */ ((
			var_1_15
		) ? (
			/* 388L, 242L, 771L, 805L, 1153L) */ ((
				/* 389L, 210L, 214L, 772L, 806L, 1154L) */ ((
					var_1_13
				) > (
					var_1_5
				))
			) ? (
				/* 392L, 226L, 775L, 809L, 1157L) */ ((
					var_1_14
				) ? (
					/* 394L, 224L, 777L, 811L, 1159L) */ ((
						var_1_16
					) == (
						/* 394L, 224L, 777L, 811L, 1159L) */ ((signed short int) (
							/* 397L, 223L, 780L, 814L, 1162L) */ (abs (
								5
							))
						))
					))
				) : (
					1
				))
			) : (
				/* 399L, 240L, 782L, 816L, 1164L) */ ((
					var_1_16
				) == (
					/* 399L, 240L, 782L, 816L, 1164L) */ ((signed short int) (
						/* 402L, 239L, 785L, 819L, 1167L) */ ((
							/* 403L, 231L, 786L, 820L, 1168L) */ ((
								50
							) + (
								var_1_5
							))
						) + (
							/* 406L, 238L, 789L, 823L, 1171L) */ ((
								/* 407L, 234L, 790L, 824L, 1172L) */ (min (
									/* 407L, 234L, 790L, 824L, 1172L) */ (
										var_1_13
									) , (
										var_1_6
									)
								))
							) + (
								/* 410L, 237L, 793L, 827L, 1175L) */ ((
									var_1_7
								) - (
									var_1_4
								))
							))
						))
					))
				))
			))
		) : (
			/* 413L, 248L, 796L, 830L, 1178L) */ ((
				var_1_16
			) == (
				/* 413L, 248L, 796L, 830L, 1178L) */ ((signed short int) (
					/* 416L, 247L, 799L, 833L, 1181L) */ (max (
						/* 416L, 247L, 799L, 833L, 1181L) */ (
							-128
						) , (
							var_1_7
						)
					))
				))
			))
		))
	))
) && (
	/* 421L, 258L, 850L, 856L, 1186L) */ ((
		var_1_18
	) == (
		/* 421L, 258L, 850L, 856L, 1186L) */ ((signed short int) (
			var_1_6
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
