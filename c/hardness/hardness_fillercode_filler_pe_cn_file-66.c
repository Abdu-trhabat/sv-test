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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch66Filler_PE_CN.c", 13, "reach_error"); }
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
signed char var_1_1 = 50;
unsigned char var_1_2 = 0;
signed char var_1_3 = 8;
signed char var_1_4 = 10;
double var_1_5 = 16.5;
signed char var_1_6 = 64;
signed char var_1_7 = 2;
unsigned short int var_1_8 = 256;
unsigned short int var_1_9 = 43463;
unsigned short int var_1_10 = 52427;
float var_1_11 = 256.8;
float var_1_12 = 199.8;
signed short int var_1_13 = 32;
signed short int var_1_14 = -50;
float var_1_15 = 4.5;
double var_1_16 = 0.7;
signed long int var_1_17 = -8;
unsigned char var_1_18 = 1;
signed long int var_1_19 = 5;
signed long int var_1_20 = -128;
unsigned long int var_1_21 = 10;
unsigned long int var_1_22 = 5;
signed long int var_1_23 = -10000;
signed long int var_1_24 = -1263929197;
signed long int var_1_25 = 500;
signed short int var_1_26 = 1;
signed short int var_1_27 = 256;
signed short int var_1_28 = 4;
signed short int var_1_29 = -256;
signed short int var_1_30 = 32;
unsigned char var_1_31 = 32;
signed char var_1_32 = 10;
unsigned char var_1_33 = 128;
unsigned char var_1_34 = 64;
unsigned char var_1_35 = 10;
unsigned char var_1_36 = 50;
unsigned long int var_1_37 = 16;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch66Filler_PE_CN
	/* 839L, 11L, 275L, 285L) */ if (var_1_2) {
		/* 841L, 10L, 277L, 287L) */ var_1_1 = (
			/* 844L, 9L, 280L, 290L) */ ((
				var_1_3
			) + (
				var_1_4
			))
		);
	}


	// From: Req2Batch66Filler_PE_CN
	/* 850L, 43L, 316L, 331L) */ if (/* 851L, 23L, 24L, 317L, 332L) */ ((var_1_4) >= (/* 853L, 22L, 26L, 319L, 334L) */ ((var_1_6) - (var_1_7))))) {
		/* 856L, 41L, 322L, 337L) */ if (var_1_2) {
			/* 858L, 40L, 324L, 339L) */ var_1_5 = (
				8.25
			);
		}
	}


	// From: Req3Batch66Filler_PE_CN
	signed long int stepLocal_0 = -25;
	/* 887L, 90L, 374L, 398L) */ if (/* 871L, 60L, 61L, 375L, 399L) */ ((stepLocal_0) == (/* 870L, 59L, 63L, 377L, 401L) */ ((var_1_3) * (/* 869L, 58L, 65L, 379L, 403L) */ ((-5) * (var_1_6))))))) {
		/* 878L, 81L, 382L, 406L) */ var_1_8 = (
			/* 877L, 80L, 385L, 409L) */ (abs (
				/* 876L, 79L, 386L, 410L) */ ((
					var_1_9
				) - (
					var_1_7
				))
			))
		);
	} else {
		/* 886L, 89L, 389L, 413L) */ var_1_8 = (
			/* 885L, 88L, 392L, 416L) */ (max (
				/* 885L, 88L, 392L, 416L) */ (
					var_1_9
				) , (
					/* 884L, 87L, 394L, 418L) */ ((
						var_1_10
					) - (
						var_1_7
					))
				)
			))
		);
	}


	// From: Req4Batch66Filler_PE_CN
	/* 894L, 123L, 473L, 490L) */ if (/* 895L, 97L, 98L, 474L, 491L) */ (! (var_1_2))) {
		/* 897L, 121L, 476L, 493L) */ if (/* 898L, 106L, 107L, 477L, 494L) */ ((/* 899L, 104L, 108L, 478L, 495L) */ ((var_1_8) * (16))) >= (var_1_3))) {
			/* 903L, 120L, 482L, 499L) */ var_1_11 = (
				var_1_12
			);
		}
	}


	// From: Req5Batch66Filler_PE_CN
	/* 909L, 161L, 539L, 560L) */ if (/* 910L, 138L, 139L, 540L, 561L) */ ((var_1_9) < (/* 912L, 137L, 141L, 542L, 563L) */ (- (var_1_10))))) {
		/* 914L, 154L, 544L, 565L) */ var_1_13 = (
			/* 917L, 153L, 547L, 568L) */ ((
				var_1_3
			) + (
				/* 919L, 152L, 549L, 570L) */ ((
					var_1_6
				) + (
					var_1_7
				))
			))
		);
	} else {
		/* 922L, 160L, 552L, 573L) */ var_1_13 = (
			/* 925L, 159L, 555L, 576L) */ ((
				var_1_6
			) - (
				var_1_7
			))
		);
	}


	// From: Req6Batch66Filler_PE_CN
	signed long int stepLocal_1 = /* 930L, 171L, 177L, 624L, 657L) */ (max (/* 930L, 171L, 177L, 624L, 657L) */ (var_1_3) , (var_1_4)));
	/* 962L, 237L, 622L, 655L) */ if (/* 937L, 175L, 176L, 623L, 656L) */ ((stepLocal_1) > (/* 936L, 174L, 180L, 627L, 660L) */ ((var_1_13) / (var_1_10))))) {
		/* 957L, 231L, 630L, 663L) */ if (/* 948L, 200L, 201L, 631L, 664L) */ ((/* 942L, 194L, 202L, 632L, 665L) */ (max (/* 942L, 194L, 202L, 632L, 665L) */ (/* 940L, 192L, 203L, 633L, 666L) */ ((var_1_11) + (var_1_12))) , (1.0000000000002E12f)))) <= (/* 947L, 199L, 207L, 637L, 670L) */ ((var_1_5) / (/* 946L, 198L, 209L, 639L, 672L) */ (min (/* 946L, 198L, 209L, 639L, 672L) */ (127.5f) , (var_1_15)))))))) {
			/* 952L, 226L, 642L, 675L) */ var_1_14 = (
				var_1_3
			);
		} else {
			/* 956L, 230L, 646L, 679L) */ var_1_14 = (
				var_1_7
			);
		}
	} else {
		/* 961L, 236L, 650L, 683L) */ var_1_14 = (
			var_1_3
		);
	}


	// From: Req7Batch66Filler_PE_CN
	/* 967L, 268L, 783L, 797L) */ if (/* 968L, 249L, 250L, 784L, 798L) */ ((var_1_15) != (/* 970L, 248L, 252L, 786L, 800L) */ (min (/* 970L, 248L, 252L, 786L, 800L) */ (var_1_12) , (/* 972L, 247L, 254L, 788L, 802L) */ ((var_1_5) * (var_1_11)))))))) {
		/* 975L, 267L, 791L, 805L) */ var_1_16 = (
			var_1_12
		);
	}


	// From: CodeObject1
	/* 23L) */ if (/* 8L, 7L) */ ((var_1_19) > (var_1_20))) {
		/* 21L) */ if (var_1_18) {
			/* 20L) */ var_1_17 = (
				8
			);
		}
	}


	// From: CodeObject2
	/* 36L) */ var_1_21 = (
		var_1_22
	);


	// From: CodeObject3
	/* 66L) */ if (/* 45L, 44L) */ ((/* 46L, 42L) */ (abs (-256))) < (var_1_20))) {
		/* 61L) */ var_1_23 = (
			/* 60L) */ ((
				5
			) - (
				/* 59L) */ ((
					/* 57L) */ (abs (
						var_1_24
					))
				) - (
					var_1_25
				))
			))
		);
	} else {
		/* 65L) */ var_1_23 = (
			var_1_25
		);
	}


	// From: CodeObject4
	/* 123L) */ if (/* 73L, 72L) */ ((var_1_21) > (var_1_24))) {
		/* 121L) */ if (/* 82L, 81L) */ ((var_1_19) < (var_1_24))) {
			/* 119L) */ if (/* 93L, 92L) */ ((var_1_19) <= (/* 95L, 91L) */ ((-64) & (var_1_21))))) {
				/* 110L) */ var_1_26 = (
					/* 109L) */ (max (
						/* 109L) */ (
							var_1_27
						) , (
							/* 108L) */ (min (
								/* 108L) */ (
									8
								) , (
									var_1_28
								)
							))
						)
					))
				);
			} else {
				/* 118L) */ var_1_26 = (
					/* 117L) */ ((
						var_1_29
					) + (
						/* 116L) */ (max (
							/* 116L) */ (
								4
							) , (
								var_1_30
							)
						))
					))
				);
			}
		}
	}


	// From: CodeObject5
	/* 164L) */ if (/* 134L, 133L) */ ((/* 135L, 131L) */ ((/* 136L, 129L) */ ((64) - (var_1_32))) << (10))) > (var_1_25))) {
		/* 159L) */ var_1_31 = (
			/* 158L) */ (max (
				/* 158L) */ (
					/* 154L) */ ((
						var_1_33
					) - (
						/* 153L) */ ((
							var_1_34
						) - (
							var_1_32
						))
					))
				) , (
					/* 157L) */ (max (
						/* 157L) */ (
							var_1_35
						) , (
							var_1_36
						)
					))
				)
			))
		);
	} else {
		/* 163L) */ var_1_31 = (
			var_1_34
		);
	}


	// From: CodeObject6
	/* 236L) */ if (/* 173L, 172L) */ ((var_1_35) >= (var_1_20))) {
		/* 221L) */ if (/* 191L, 190L) */ ((/* 192L, 184L) */ ((/* 193L, 182L) */ ((var_1_29) ^ (var_1_36))) / (var_1_34))) <= (/* 197L, 189L) */ ((/* 198L, 187L) */ ((-1) | (var_1_19))) ^ (var_1_20))))) {
			/* 220L) */ var_1_37 = (
				/* 219L) */ (max (
					/* 219L) */ (
						var_1_32
					) , (
						/* 218L) */ (abs (
							/* 217L) */ (abs (
								var_1_25
							))
						))
					)
				))
			);
		}
	} else {
		/* 234L) */ if (var_1_18) {
			/* 229L) */ var_1_37 = (
				var_1_31
			);
		} else {
			/* 233L) */ var_1_37 = (
				var_1_36
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
	assume_abort_if_not(var_1_15 != 0.0F);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= -2147483648);
	assume_abort_if_not(var_1_19 <= 2147483647);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= -2147483648);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 4294967294);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= -2147483646);
	assume_abort_if_not(var_1_24 <= -1073741823);
	var_1_25 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 1073741823);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= -32767);
	assume_abort_if_not(var_1_27 <= 32766);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32767);
	assume_abort_if_not(var_1_28 <= 32766);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= -16383);
	assume_abort_if_not(var_1_29 <= 16383);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -16383);
	assume_abort_if_not(var_1_30 <= 16383);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 63);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 127);
	assume_abort_if_not(var_1_33 <= 254);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 63);
	assume_abort_if_not(var_1_34 <= 127);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_2) {
	}
	if (/* 251L, 23L, 29L, 347L, 362L, 993L) */ ((var_1_4) >= (/* 253L, 22L, 31L, 349L, 364L, 995L) */ ((var_1_6) - (var_1_7))))) {
		if (var_1_2) {
		}
	}
	if (/* 264L, 60L, 68L, 423L, 447L, 1006L) */ ((-25) == (/* 266L, 59L, 70L, 425L, 449L, 1008L) */ ((var_1_3) * (/* 268L, 58L, 72L, 427L, 451L, 1010L) */ ((-5) * (var_1_6))))))) {
	} else {
	}
	if (/* 291L, 97L, 100L, 508L, 525L, 1033L) */ (! (var_1_2))) {
		if (/* 294L, 106L, 112L, 511L, 528L, 1036L) */ ((/* 295L, 104L, 113L, 512L, 529L, 1037L) */ ((var_1_8) * (16))) >= (var_1_3))) {
		}
	}
	if (/* 306L, 138L, 143L, 582L, 603L, 1048L) */ ((var_1_9) < (/* 308L, 137L, 145L, 584L, 605L, 1050L) */ (- (var_1_10))))) {
	} else {
	}
	if (/* 326L, 175L, 183L, 689L, 722L, 1068L) */ ((/* 327L, 171L, 184L, 690L, 723L, 1069L) */ (max (/* 327L, 171L, 184L, 690L, 723L, 1069L) */ (var_1_3) , (var_1_4)))) > (/* 330L, 174L, 187L, 693L, 726L, 1072L) */ ((var_1_13) / (var_1_10))))) {
		if (/* 334L, 200L, 212L, 697L, 730L, 1076L) */ ((/* 335L, 194L, 213L, 698L, 731L, 1077L) */ (max (/* 335L, 194L, 213L, 698L, 731L, 1077L) */ (/* 336L, 192L, 214L, 699L, 732L, 1078L) */ ((var_1_11) + (var_1_12))) , (1.0000000000002E12f)))) <= (/* 340L, 199L, 218L, 703L, 736L, 1082L) */ ((var_1_5) / (/* 342L, 198L, 220L, 705L, 738L, 1084L) */ (min (/* 342L, 198L, 220L, 705L, 738L, 1084L) */ (127.5f) , (var_1_15)))))))) {
		} else {
		}
	} else {
	}
	if (/* 360L, 249L, 257L, 812L, 826L, 1102L) */ ((var_1_15) != (/* 362L, 248L, 259L, 814L, 828L, 1104L) */ (min (/* 362L, 248L, 259L, 814L, 828L, 1104L) */ (var_1_12) , (/* 364L, 247L, 261L, 816L, 830L, 1106L) */ ((var_1_5) * (var_1_11)))))))) {
	}
	return /* 377L) */ ((
	/* 376L) */ ((
		/* 375L) */ ((
			/* 374L) */ ((
				/* 373L) */ ((
					/* 372L) */ ((
						/* 239L, 12L, 295L, 305L, 981L) */ ((
							var_1_2
						) ? (
							/* 241L, 10L, 297L, 307L, 983L) */ ((
								var_1_1
							) == (
								/* 241L, 10L, 297L, 307L, 983L) */ ((signed char) (
									/* 244L, 9L, 300L, 310L, 986L) */ ((
										var_1_3
									) + (
										var_1_4
									))
								))
							))
						) : (
							1
						))
					) && (
						/* 250L, 44L, 346L, 361L, 992L) */ ((
							/* 251L, 23L, 29L, 347L, 362L, 993L) */ ((
								var_1_4
							) >= (
								/* 253L, 22L, 31L, 349L, 364L, 995L) */ ((
									var_1_6
								) - (
									var_1_7
								))
							))
						) ? (
							/* 256L, 42L, 352L, 367L, 998L) */ ((
								var_1_2
							) ? (
								/* 258L, 40L, 354L, 369L, 1000L) */ ((
									var_1_5
								) == (
									/* 258L, 40L, 354L, 369L, 1000L) */ ((double) (
										8.25
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
					/* 263L, 91L, 422L, 446L, 1005L) */ ((
						/* 264L, 60L, 68L, 423L, 447L, 1006L) */ ((
							-25
						) == (
							/* 266L, 59L, 70L, 425L, 449L, 1008L) */ ((
								var_1_3
							) * (
								/* 268L, 58L, 72L, 427L, 451L, 1010L) */ ((
									-5
								) * (
									var_1_6
								))
							))
						))
					) ? (
						/* 271L, 81L, 430L, 454L, 1013L) */ ((
							var_1_8
						) == (
							/* 271L, 81L, 430L, 454L, 1013L) */ ((unsigned short int) (
								/* 274L, 80L, 433L, 457L, 1016L) */ (abs (
									/* 275L, 79L, 434L, 458L, 1017L) */ ((
										var_1_9
									) - (
										var_1_7
									))
								))
							))
						))
					) : (
						/* 278L, 89L, 437L, 461L, 1020L) */ ((
							var_1_8
						) == (
							/* 278L, 89L, 437L, 461L, 1020L) */ ((unsigned short int) (
								/* 281L, 88L, 440L, 464L, 1023L) */ (max (
									/* 281L, 88L, 440L, 464L, 1023L) */ (
										var_1_9
									) , (
										/* 283L, 87L, 442L, 466L, 1025L) */ ((
											var_1_10
										) - (
											var_1_7
										))
									)
								))
							))
						))
					))
				))
			) && (
				/* 290L, 124L, 507L, 524L, 1032L) */ ((
					/* 291L, 97L, 100L, 508L, 525L, 1033L) */ (! (
						var_1_2
					))
				) ? (
					/* 293L, 122L, 510L, 527L, 1035L) */ ((
						/* 294L, 106L, 112L, 511L, 528L, 1036L) */ ((
							/* 295L, 104L, 113L, 512L, 529L, 1037L) */ ((
								var_1_8
							) * (
								16
							))
						) >= (
							var_1_3
						))
					) ? (
						/* 299L, 120L, 516L, 533L, 1041L) */ ((
							var_1_11
						) == (
							/* 299L, 120L, 516L, 533L, 1041L) */ ((float) (
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
			/* 305L, 162L, 581L, 602L, 1047L) */ ((
				/* 306L, 138L, 143L, 582L, 603L, 1048L) */ ((
					var_1_9
				) < (
					/* 308L, 137L, 145L, 584L, 605L, 1050L) */ (- (
						var_1_10
					))
				))
			) ? (
				/* 310L, 154L, 586L, 607L, 1052L) */ ((
					var_1_13
				) == (
					/* 310L, 154L, 586L, 607L, 1052L) */ ((signed short int) (
						/* 313L, 153L, 589L, 610L, 1055L) */ ((
							var_1_3
						) + (
							/* 315L, 152L, 591L, 612L, 1057L) */ ((
								var_1_6
							) + (
								var_1_7
							))
						))
					))
				))
			) : (
				/* 318L, 160L, 594L, 615L, 1060L) */ ((
					var_1_13
				) == (
					/* 318L, 160L, 594L, 615L, 1060L) */ ((signed short int) (
						/* 321L, 159L, 597L, 618L, 1063L) */ ((
							var_1_6
						) - (
							var_1_7
						))
					))
				))
			))
		))
	) && (
		/* 325L, 238L, 688L, 721L, 1067L) */ ((
			/* 326L, 175L, 183L, 689L, 722L, 1068L) */ ((
				/* 327L, 171L, 184L, 690L, 723L, 1069L) */ (max (
					/* 327L, 171L, 184L, 690L, 723L, 1069L) */ (
						var_1_3
					) , (
						var_1_4
					)
				))
			) > (
				/* 330L, 174L, 187L, 693L, 726L, 1072L) */ ((
					var_1_13
				) / (
					var_1_10
				))
			))
		) ? (
			/* 333L, 232L, 696L, 729L, 1075L) */ ((
				/* 334L, 200L, 212L, 697L, 730L, 1076L) */ ((
					/* 335L, 194L, 213L, 698L, 731L, 1077L) */ (max (
						/* 335L, 194L, 213L, 698L, 731L, 1077L) */ (
							/* 336L, 192L, 214L, 699L, 732L, 1078L) */ ((
								var_1_11
							) + (
								var_1_12
							))
						) , (
							1.0000000000002E12f
						)
					))
				) <= (
					/* 340L, 199L, 218L, 703L, 736L, 1082L) */ ((
						var_1_5
					) / (
						/* 342L, 198L, 220L, 705L, 738L, 1084L) */ (min (
							/* 342L, 198L, 220L, 705L, 738L, 1084L) */ (
								127.5f
							) , (
								var_1_15
							)
						))
					))
				))
			) ? (
				/* 345L, 226L, 708L, 741L, 1087L) */ ((
					var_1_14
				) == (
					/* 345L, 226L, 708L, 741L, 1087L) */ ((signed short int) (
						var_1_3
					))
				))
			) : (
				/* 349L, 230L, 712L, 745L, 1091L) */ ((
					var_1_14
				) == (
					/* 349L, 230L, 712L, 745L, 1091L) */ ((signed short int) (
						var_1_7
					))
				))
			))
		) : (
			/* 353L, 236L, 716L, 749L, 1095L) */ ((
				var_1_14
			) == (
				/* 353L, 236L, 716L, 749L, 1095L) */ ((signed short int) (
					var_1_3
				))
			))
		))
	))
) && (
	/* 359L, 269L, 811L, 825L, 1101L) */ ((
		/* 360L, 249L, 257L, 812L, 826L, 1102L) */ ((
			var_1_15
		) != (
			/* 362L, 248L, 259L, 814L, 828L, 1104L) */ (min (
				/* 362L, 248L, 259L, 814L, 828L, 1104L) */ (
					var_1_12
				) , (
					/* 364L, 247L, 261L, 816L, 830L, 1106L) */ ((
						var_1_5
					) * (
						var_1_11
					))
				)
			))
		))
	) ? (
		/* 367L, 267L, 819L, 833L, 1109L) */ ((
			var_1_16
		) == (
			/* 367L, 267L, 819L, 833L, 1109L) */ ((double) (
				var_1_12
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
