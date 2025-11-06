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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch70Filler_PE_CI.c", 13, "reach_error"); }
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
double var_1_1 = 5.05;
unsigned char var_1_2 = 1;
double var_1_6 = 0.0;
double var_1_7 = 49.5;
double var_1_8 = 16.75;
unsigned short int var_1_9 = 1;
unsigned char var_1_10 = 1;
unsigned long int var_1_11 = 8;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned char var_1_14 = 32;
unsigned char var_1_15 = 50;
unsigned char var_1_16 = 8;
unsigned char var_1_17 = 32;
unsigned long int var_1_18 = 2;
unsigned long int var_1_19 = 3876014737;
unsigned char var_1_20 = 0;
unsigned short int var_1_21 = 25;
unsigned short int var_1_22 = 5;
unsigned short int var_1_23 = 8;
signed long int var_1_24 = 0;
unsigned short int var_1_25 = 5;
unsigned short int var_1_26 = 256;
unsigned char var_1_27 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
float var_1_34 = 255.25;
float var_1_36 = 4.131;
signed long int var_1_39 = -4;
float var_1_40 = 99999.8;
float var_1_41 = 25.25;
signed short int var_1_42 = 5;
signed short int var_1_43 = -128;

// Calibration values

// Last'ed variables
double last_1_var_1_1 = 5.05;
unsigned short int last_1_var_1_9 = 1;
unsigned char last_1_var_1_14 = 32;
unsigned long int last_1_var_1_18 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch70Filler_PE_CI
	/* 86L, 108L, 518L, 549L, 1044L, 1110L) */ if (/* 57L, 47L, 48L, 519L, 550L, 1015L, 1111L) */ ((var_1_6) > (/* 56L, 46L, 50L, 521L, 552L, 1014L, 1113L) */ (min (/* 56L, 46L, 50L, 521L, 552L, 1014L, 1113L) */ (var_1_8) , (last_1_var_1_1)))))) {
		/* 85L, 106L, 524L, 555L, 1043L, 1117L) */ if (/* 66L, 65L, 66L, 525L, 556L, 1024L, 1118L) */ (! (/* 65L, 64L, 67L, 526L, 557L, 1023L, 1119L) */ ((/* 61L, 60L, 68L, 527L, 558L, 1019L, 1120L) */ ((last_1_var_1_1) == (var_1_7))) && (/* 64L, 63L, 71L, 530L, 561L, 1022L, 1124L) */ ((var_1_2) || (var_1_10))))))) {
			/* 79L, 100L, 533L, 564L, 1037L, 1127L) */ if (/* 70L, 85L, 86L, 534L, 565L, 1028L, 1128L) */ (! (/* 69L, 84L, 87L, 535L, 566L, 1027L, 1129L) */ ((var_1_6) <= (var_1_7))))) {
				/* 78L, 99L, 538L, 569L, 1036L, 1132L) */ var_1_9 = (
					/* 77L, 98L, 541L, 572L, 1035L, 1135L) */ (min (
						/* 77L, 98L, 541L, 572L, 1035L, 1135L) */ (
							last_1_var_1_14
						) , (
							last_1_var_1_18
						)
					))
				);
			}
		} else {
			/* 84L, 105L, 544L, 575L, 1042L, 1140L) */ var_1_9 = (
				last_1_var_1_18
			);
		}
	}


	// From: Req5Batch70Filler_PE_CI
	/* 21L, 178L, 725L, 749L, 979L, 1169L) */ if (/* 8L, 151L, 152L, 726L, 750L, 966L, 1170L) */ ((/* 2L, 147L, 153L, 727L, 751L, 960L, 1171L) */ ((8) - (64))) <= (/* 7L, 150L, 156L, 730L, 754L, 965L, 1174L) */ ((last_1_var_1_9) - (last_1_var_1_18))))) {
		/* 16L, 173L, 733L, 757L, 974L, 1179L) */ var_1_14 = (
			/* 15L, 172L, 736L, 760L, 973L, 1182L) */ (min (
				/* 15L, 172L, 736L, 760L, 973L, 1182L) */ (
					/* 13L, 170L, 737L, 761L, 971L, 1183L) */ ((
						var_1_15
					) + (
						var_1_16
					))
				) , (
					var_1_17
				)
			))
		);
	} else {
		/* 20L, 177L, 741L, 765L, 978L, 1187L) */ var_1_14 = (
			var_1_17
		);
	}


	// From: Req6Batch70Filler_PE_CI
	/* 1192L, 209L, 818L, 837L) */ if (var_1_13) {
		/* 1194L, 200L, 820L, 839L) */ var_1_18 = (
			/* 1197L, 199L, 823L, 842L) */ ((
				/* 1198L, 197L, 824L, 843L) */ ((
					var_1_19
				) - (
					var_1_9
				))
			) - (
				var_1_14
			))
		);
	} else {
		/* 1202L, 208L, 828L, 847L) */ var_1_18 = (
			/* 1205L, 207L, 831L, 850L) */ (max (
				/* 1205L, 207L, 831L, 850L) */ (
					/* 1206L, 205L, 832L, 851L) */ ((
						var_1_19
					) - (
						var_1_17
					))
				) , (
					var_1_15
				)
			))
		);
	}


	// From: Req3Batch70Filler_PE_CI
	/* 1148L, 123L, 644L, 657L) */ var_1_11 = (
		/* 1151L, 122L, 647L, 660L) */ ((
			var_1_14
		) + (
			/* 1153L, 121L, 649L, 662L) */ ((
				/* 1154L, 119L, 650L, 663L) */ (min (
					/* 1154L, 119L, 650L, 663L) */ (
						var_1_18
					) , (
						var_1_9
					)
				))
			) + (
				2u
			))
		))
	);


	// From: Req1Batch70Filler_PE_CI
	unsigned long int stepLocal_0 = var_1_11;
	/* 1106L, 37L, 298L, 322L) */ if (/* 1089L, 8L, 9L, 299L, 323L) */ ((stepLocal_0) >= (/* 1088L, 7L, 11L, 301L, 325L) */ (- (/* 1087L, 6L, 12L, 302L, 326L) */ (min (/* 1087L, 6L, 12L, 302L, 326L) */ (var_1_11) , (var_1_14)))))))) {
		/* 1101L, 32L, 305L, 329L) */ var_1_1 = (
			/* 1100L, 31L, 308L, 332L) */ ((
				/* 1098L, 29L, 309L, 333L) */ ((
					/* 1094L, 25L, 310L, 334L) */ ((
						var_1_6
					) - (
						var_1_7
					))
				) - (
					/* 1097L, 28L, 313L, 337L) */ (max (
						/* 1097L, 28L, 313L, 337L) */ (
							64.75
						) , (
							128.725
						)
					))
				))
			) + (
				var_1_8
			))
		);
	} else {
		/* 1105L, 36L, 317L, 341L) */ var_1_1 = (
			var_1_7
		);
	}


	// From: Req7Batch70Filler_PE_CI
	/* 1214L, 240L, 897L, 913L) */ if (/* 1215L, 221L, 222L, 898L, 914L) */ ((/* 1216L, 217L, 223L, 899L, 915L) */ ((var_1_18) / (var_1_19))) <= (/* 1219L, 220L, 226L, 902L, 918L) */ (min (/* 1219L, 220L, 226L, 902L, 918L) */ (var_1_11) , (var_1_18)))))) {
		/* 1222L, 239L, 905L, 921L) */ var_1_20 = (
			var_1_13
		);
	}


	// From: Req4Batch70Filler_PE_CI
	/* 1159L, 139L, 694L, 701L) */ if (var_1_20) {
		/* 1161L, 138L, 696L, 703L) */ var_1_12 = (
			var_1_13
		);
	}


	// From: CodeObject1
	/* 445L, 152L) */ if (/* 446L, 131L, 132L) */ ((/* 447L, 129L, 133L) */ (min (/* 447L, 129L, 133L) */ (var_1_22) , (var_1_23)))) > (var_1_24))) {
		/* 451L, 151L) */ var_1_21 = (
			/* 454L, 150L) */ (min (
				/* 454L, 150L) */ (
					/* 455L, 148L) */ ((
						/* 456L, 146L) */ (min (
							/* 456L, 146L) */ (
								var_1_25
							) , (
								0
							)
						))
					) + (
						var_1_26
					))
				) , (
					16
				)
			))
		);
	}


	// From: CodeObject2
	/* 461L, 238L) */ if (/* 462L, 162L, 163L) */ ((/* 463L, 160L, 164L) */ ((var_1_9) <= (var_1_18))) && (var_1_13))) {
		/* 467L, 236L) */ if (/* 468L, 180L, 181L) */ (! (/* 469L, 179L, 182L) */ ((/* 470L, 175L, 183L) */ (max (/* 470L, 175L, 183L) */ (var_1_15) , (var_1_9)))) < (/* 473L, 178L, 186L) */ ((var_1_26) & (var_1_18))))))) {
			/* 476L, 200L) */ var_1_27 = (
				var_1_13
			);
		} else {
			/* 480L, 234L) */ if (/* 481L, 207L, 208L) */ ((/* 482L, 202L, 209L) */ (~ (var_1_18))) >= (/* 484L, 206L, 211L) */ ((var_1_15) & (/* 486L, 205L, 213L) */ (abs (var_1_9))))))) {
				/* 488L, 225L) */ var_1_27 = (
					var_1_13
				);
			} else {
				/* 492L, 233L) */ var_1_27 = (
					0
				);
			}
		}
	}


	// From: CodeObject3
	/* 496L, 263L) */ if (/* 497L, 244L, 245L) */ ((var_1_19) < (var_1_11))) {
		/* 500L, 255L) */ var_1_31 = (
			/* 503L, 254L) */ (! (
				var_1_32
			))
		);
	} else {
		/* 505L, 262L) */ var_1_31 = (
			/* 508L, 261L) */ ((
				var_1_32
			) || (
				/* 510L, 260L) */ (! (
					var_1_33
				))
			))
		);
	}


	// From: CodeObject4
	/* 513L, 270L) */ var_1_34 = (
		var_1_8
	);


	// From: CodeObject5
	/* 517L, 307L) */ if (/* 518L, 281L, 282L) */ ((/* 519L, 279L, 283L) */ ((var_1_18) + (/* 521L, 278L, 285L) */ (min (/* 521L, 278L, 285L) */ (var_1_18) , (1u)))))) > (var_1_25))) {
		/* 525L, 305L) */ if (var_1_13) {
			/* 527L, 304L) */ var_1_36 = (
				/* 530L, 303L) */ ((
					var_1_6
				) - (
					var_1_7
				))
			);
		}
	}


	// From: CodeObject6
	/* 533L, 335L) */ if (/* 534L, 312L, 313L) */ (! (var_1_13))) {
		/* 536L, 333L) */ if (/* 537L, 319L, 320L) */ ((var_1_18) < (8))) {
			/* 540L, 332L) */ var_1_39 = (
				/* 543L, 331L) */ ((
					/* 544L, 329L) */ (abs (
						var_1_26
					))
				) + (
					var_1_18
				))
			);
		}
	}


	// From: CodeObject7
	/* 549L, 346L) */ if (var_1_20) {
		/* 551L, 345L) */ var_1_40 = (
			var_1_6
		);
	}


	// From: CodeObject8
	/* 556L, 357L) */ var_1_41 = (
		25.84f
	);


	// From: CodeObject9
	/* 561L, 365L) */ var_1_42 = (
		5
	);


	// From: CodeObject10
	/* 566L, 373L) */ var_1_43 = (
		var_1_11
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 2305843.009213691400e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 2305843.009213691400e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 127);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 3221225470);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 65535);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 65535);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= -2147483648);
	assume_abort_if_not(var_1_24 <= 2147483647);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 32767);
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 32767);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 0);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_9 = var_1_9;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (/* 571L, 8L, 15L, 347L, 371L, 1228L) */ ((var_1_11) >= (/* 573L, 7L, 17L, 349L, 373L, 1230L) */ (- (/* 574L, 6L, 18L, 350L, 374L, 1231L) */ (min (/* 574L, 6L, 18L, 350L, 374L, 1231L) */ (var_1_11) , (var_1_14)))))))) {
	} else {
	}
	if (/* 595L, 47L, 53L, 581L, 612L, 1051L, 1252L, 93L) */ ((var_1_6) > (/* 597L, 46L, 55L, 583L, 614L, 1050L, 1254L, 92L) */ (min (/* 597L, 46L, 55L, 583L, 614L, 1050L, 1254L, 92L) */ (var_1_8) , (last_1_var_1_1)))))) {
		if (/* 602L, 65L, 74L, 587L, 618L, 1060L, 1259L, 102L) */ (! (/* 603L, 64L, 75L, 588L, 619L, 1059L, 1260L, 101L) */ ((/* 604L, 60L, 76L, 589L, 620L, 1055L, 1261L, 97L) */ ((last_1_var_1_1) == (var_1_7))) && (/* 608L, 63L, 79L, 592L, 623L, 1058L, 1265L, 100L) */ ((var_1_2) || (var_1_10))))))) {
			if (/* 612L, 85L, 90L, 596L, 627L, 1064L, 1269L, 106L) */ (! (/* 613L, 84L, 91L, 597L, 628L, 1063L, 1270L, 105L) */ ((var_1_6) <= (var_1_7))))) {
			}
		} else {
		}
	}
	if (var_1_20) {
	}
	if (/* 654L, 151L, 159L, 774L, 798L, 992L, 1311L, 34L) */ ((/* 655L, 147L, 160L, 775L, 799L, 986L, 1312L, 28L) */ ((8) - (64))) <= (/* 658L, 150L, 163L, 778L, 802L, 991L, 1315L, 33L) */ ((last_1_var_1_9) - (last_1_var_1_18))))) {
	} else {
	}
	if (var_1_13) {
	} else {
	}
	if (/* 699L, 221L, 229L, 930L, 946L, 1356L) */ ((/* 700L, 217L, 230L, 931L, 947L, 1357L) */ ((var_1_18) / (var_1_19))) <= (/* 703L, 220L, 233L, 934L, 950L, 1360L) */ (min (/* 703L, 220L, 233L, 934L, 950L, 1360L) */ (var_1_11) , (var_1_18)))))) {
	}
	return /* 716L) */ ((
	/* 715L) */ ((
		/* 714L) */ ((
			/* 713L) */ ((
				/* 712L) */ ((
					/* 711L) */ ((
						/* 570L, 38L, 346L, 370L, 1227L) */ ((
							/* 571L, 8L, 15L, 347L, 371L, 1228L) */ ((
								var_1_11
							) >= (
								/* 573L, 7L, 17L, 349L, 373L, 1230L) */ (- (
									/* 574L, 6L, 18L, 350L, 374L, 1231L) */ (min (
										/* 574L, 6L, 18L, 350L, 374L, 1231L) */ (
											var_1_11
										) , (
											var_1_14
										)
									))
								))
							))
						) ? (
							/* 577L, 32L, 353L, 377L, 1234L) */ ((
								var_1_1
							) == (
								/* 577L, 32L, 353L, 377L, 1234L) */ ((double) (
									/* 580L, 31L, 356L, 380L, 1237L) */ ((
										/* 581L, 29L, 357L, 381L, 1238L) */ ((
											/* 582L, 25L, 358L, 382L, 1239L) */ ((
												var_1_6
											) - (
												var_1_7
											))
										) - (
											/* 585L, 28L, 361L, 385L, 1242L) */ (max (
												/* 585L, 28L, 361L, 385L, 1242L) */ (
													64.75
												) , (
													128.725
												)
											))
										))
									) + (
										var_1_8
									))
								))
							))
						) : (
							/* 589L, 36L, 365L, 389L, 1246L) */ ((
								var_1_1
							) == (
								/* 589L, 36L, 365L, 389L, 1246L) */ ((double) (
									var_1_7
								))
							))
						))
					) && (
						/* 594L, 109L, 580L, 611L, 1080L, 1251L, 122L) */ ((
							/* 595L, 47L, 53L, 581L, 612L, 1051L, 1252L, 93L) */ ((
								var_1_6
							) > (
								/* 597L, 46L, 55L, 583L, 614L, 1050L, 1254L, 92L) */ (min (
									/* 597L, 46L, 55L, 583L, 614L, 1050L, 1254L, 92L) */ (
										var_1_8
									) , (
										last_1_var_1_1
									)
								))
							))
						) ? (
							/* 601L, 107L, 586L, 617L, 1079L, 1258L, 121L) */ ((
								/* 602L, 65L, 74L, 587L, 618L, 1060L, 1259L, 102L) */ (! (
									/* 603L, 64L, 75L, 588L, 619L, 1059L, 1260L, 101L) */ ((
										/* 604L, 60L, 76L, 589L, 620L, 1055L, 1261L, 97L) */ ((
											last_1_var_1_1
										) == (
											var_1_7
										))
									) && (
										/* 608L, 63L, 79L, 592L, 623L, 1058L, 1265L, 100L) */ ((
											var_1_2
										) || (
											var_1_10
										))
									))
								))
							) ? (
								/* 611L, 101L, 595L, 626L, 1073L, 1268L, 115L) */ ((
									/* 612L, 85L, 90L, 596L, 627L, 1064L, 1269L, 106L) */ (! (
										/* 613L, 84L, 91L, 597L, 628L, 1063L, 1270L, 105L) */ ((
											var_1_6
										) <= (
											var_1_7
										))
									))
								) ? (
									/* 616L, 99L, 600L, 631L, 1072L, 1273L, 114L) */ ((
										var_1_9
									) == (
										/* 616L, 99L, 600L, 631L, 1072L, 1273L, 114L) */ ((unsigned short int) (
											/* 619L, 98L, 603L, 634L, 1071L, 1276L, 113L) */ (min (
												/* 619L, 98L, 603L, 634L, 1071L, 1276L, 113L) */ (
													last_1_var_1_14
												) , (
													last_1_var_1_18
												)
											))
										))
									))
								) : (
									1
								))
							) : (
								/* 624L, 105L, 606L, 637L, 1078L, 1281L, 120L) */ ((
									var_1_9
								) == (
									/* 624L, 105L, 606L, 637L, 1078L, 1281L, 120L) */ ((unsigned short int) (
										last_1_var_1_18
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 632L, 123L, 670L, 683L, 1289L) */ ((
						var_1_11
					) == (
						/* 632L, 123L, 670L, 683L, 1289L) */ ((unsigned long int) (
							/* 635L, 122L, 673L, 686L, 1292L) */ ((
								var_1_14
							) + (
								/* 637L, 121L, 675L, 688L, 1294L) */ ((
									/* 638L, 119L, 676L, 689L, 1295L) */ (min (
										/* 638L, 119L, 676L, 689L, 1295L) */ (
											var_1_18
										) , (
											var_1_9
										)
									))
								) + (
									2u
								))
							))
						))
					))
				))
			) && (
				/* 643L, 140L, 708L, 715L, 1300L) */ ((
					var_1_20
				) ? (
					/* 645L, 138L, 710L, 717L, 1302L) */ ((
						var_1_12
					) == (
						/* 645L, 138L, 710L, 717L, 1302L) */ ((unsigned char) (
							var_1_13
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 653L, 179L, 773L, 797L, 1005L, 1310L, 47L) */ ((
				/* 654L, 151L, 159L, 774L, 798L, 992L, 1311L, 34L) */ ((
					/* 655L, 147L, 160L, 775L, 799L, 986L, 1312L, 28L) */ ((
						8
					) - (
						64
					))
				) <= (
					/* 658L, 150L, 163L, 778L, 802L, 991L, 1315L, 33L) */ ((
						last_1_var_1_9
					) - (
						last_1_var_1_18
					))
				))
			) ? (
				/* 663L, 173L, 781L, 805L, 1000L, 1320L, 42L) */ ((
					var_1_14
				) == (
					/* 663L, 173L, 781L, 805L, 1000L, 1320L, 42L) */ ((unsigned char) (
						/* 666L, 172L, 784L, 808L, 999L, 1323L, 41L) */ (min (
							/* 666L, 172L, 784L, 808L, 999L, 1323L, 41L) */ (
								/* 667L, 170L, 785L, 809L, 997L, 1324L, 39L) */ ((
									var_1_15
								) + (
									var_1_16
								))
							) , (
								var_1_17
							)
						))
					))
				))
			) : (
				/* 671L, 177L, 789L, 813L, 1004L, 1328L, 46L) */ ((
					var_1_14
				) == (
					/* 671L, 177L, 789L, 813L, 1004L, 1328L, 46L) */ ((unsigned char) (
						var_1_17
					))
				))
			))
		))
	) && (
		/* 676L, 210L, 856L, 875L, 1333L) */ ((
			var_1_13
		) ? (
			/* 678L, 200L, 858L, 877L, 1335L) */ ((
				var_1_18
			) == (
				/* 678L, 200L, 858L, 877L, 1335L) */ ((unsigned long int) (
					/* 681L, 199L, 861L, 880L, 1338L) */ ((
						/* 682L, 197L, 862L, 881L, 1339L) */ ((
							var_1_19
						) - (
							var_1_9
						))
					) - (
						var_1_14
					))
				))
			))
		) : (
			/* 686L, 208L, 866L, 885L, 1343L) */ ((
				var_1_18
			) == (
				/* 686L, 208L, 866L, 885L, 1343L) */ ((unsigned long int) (
					/* 689L, 207L, 869L, 888L, 1346L) */ (max (
						/* 689L, 207L, 869L, 888L, 1346L) */ (
							/* 690L, 205L, 870L, 889L, 1347L) */ ((
								var_1_19
							) - (
								var_1_17
							))
						) , (
							var_1_15
						)
					))
				))
			))
		))
	))
) && (
	/* 698L, 241L, 929L, 945L, 1355L) */ ((
		/* 699L, 221L, 229L, 930L, 946L, 1356L) */ ((
			/* 700L, 217L, 230L, 931L, 947L, 1357L) */ ((
				var_1_18
			) / (
				var_1_19
			))
		) <= (
			/* 703L, 220L, 233L, 934L, 950L, 1360L) */ (min (
				/* 703L, 220L, 233L, 934L, 950L, 1360L) */ (
					var_1_11
				) , (
					var_1_18
				)
			))
		))
	) ? (
		/* 706L, 239L, 937L, 953L, 1363L) */ ((
			var_1_20
		) == (
			/* 706L, 239L, 937L, 953L, 1363L) */ ((unsigned char) (
				var_1_13
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
