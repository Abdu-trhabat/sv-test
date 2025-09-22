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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch112Filler_PS_CI.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 8;
unsigned long int var_1_4 = 3917050220;
unsigned char var_1_5 = 1;
float var_1_6 = 7.5;
float var_1_7 = 16.75;
float var_1_8 = 10.125;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 8;
signed char var_1_11 = 100;
unsigned char var_1_12 = 1;
signed char var_1_13 = -4;
unsigned long int var_1_14 = 64;
unsigned short int var_1_15 = 100;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 5;
unsigned short int var_1_18 = 128;
unsigned long int var_1_19 = 1450604137;
unsigned long int var_1_20 = 1115287165;
unsigned short int var_1_21 = 24626;
unsigned short int var_1_22 = 2;
unsigned short int var_1_23 = 50515;
double var_1_24 = 5.4;
double var_1_25 = 9999.2;
signed short int var_1_26 = 32;
signed char var_1_27 = -8;
float var_1_33 = 9999999999999.5;
float var_1_35 = 100.5;
float var_1_36 = 3.125;
float var_1_37 = -0.5;
float var_1_38 = 2.6;
float var_1_39 = 25.5;
unsigned long int var_1_40 = 128;
signed short int var_1_41 = -16;
double var_1_42 = 0.141;
float var_1_44 = -0.6;
unsigned long int var_1_45 = 1000000;
signed short int var_1_46 = -500;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;

// Calibration values

// Last'ed variables
signed char last_1_var_1_11 = 100;
unsigned long int last_1_var_1_14 = 64;
unsigned short int last_1_var_1_18 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 270L, 62L) */ if (/* 271L, 38L, 39L) */ ((/* 272L, 34L, 40L) */ ((var_1_23) - (var_1_21))) != (/* 275L, 37L, 43L) */ ((var_1_20) >> (25))))) {
		/* 278L, 60L) */ if (var_1_12) {
			/* 280L, 59L) */ var_1_27 = (
				var_1_13
			);
		}
	}


	// From: CodeObject2
	/* 284L, 133L) */ if (/* 285L, 75L, 76L) */ ((var_1_9) && (/* 287L, 74L, 78L) */ ((10.4f) > (/* 289L, 73L, 80L) */ ((99.625f) + (var_1_6))))))) {
		/* 292L, 97L) */ var_1_33 = (
			/* 295L, 96L) */ ((
				var_1_35
			) + (
				/* 297L, 95L) */ (min (
					/* 297L, 95L) */ (
						var_1_36
					) , (
						var_1_37
					)
				))
			))
		);
	} else {
		/* 300L, 131L) */ if (/* 301L, 106L, 107L) */ ((/* 302L, 101L, 108L) */ ((var_1_1) + (var_1_20))) <= (/* 305L, 105L, 111L) */ (max (/* 305L, 105L, 111L) */ (var_1_21) , (/* 307L, 104L, 113L) */ (~ (var_1_23)))))))) {
			/* 309L, 130L) */ var_1_33 = (
				/* 312L, 129L) */ ((
					/* 313L, 127L) */ ((
						var_1_38
					) - (
						var_1_39
					))
				) + (
					var_1_37
				))
			);
		}
	}


	// From: CodeObject3
	/* 318L, 140L) */ var_1_40 = (
		var_1_23
	);


	// From: CodeObject4
	/* 323L, 148L) */ var_1_41 = (
		var_1_13
	);


	// From: CodeObject5
	/* 328L, 216L) */ if (/* 329L, 155L, 156L) */ ((var_1_39) < (var_1_35))) {
		/* 332L, 166L) */ var_1_42 = (
			/* 335L, 165L) */ (abs (
				var_1_37
			))
		);
	} else {
		/* 337L, 214L) */ if (var_1_9) {
			/* 339L, 206L) */ if (/* 340L, 173L, 174L) */ ((var_1_21) >= (/* 342L, 172L, 176L) */ (- (var_1_15))))) {
				/* 344L, 189L) */ var_1_42 = (
					/* 347L, 188L) */ (abs (
						/* 348L, 187L) */ ((
							/* 349L, 185L) */ (abs (
								var_1_35
							))
						) - (
							var_1_38
						))
					))
				);
			} else {
				/* 352L, 204L) */ if (/* 353L, 192L, 193L) */ ((var_1_1) < (var_1_20))) {
					/* 356L, 203L) */ var_1_42 = (
						/* 359L, 202L) */ (abs (
							var_1_37
						))
					);
				}
			}
		} else {
			/* 361L, 213L) */ var_1_42 = (
				/* 364L, 212L) */ ((
					var_1_39
				) - (
					var_1_38
				))
			);
		}
	}


	// From: CodeObject6
	/* 367L, 244L) */ if (/* 368L, 226L, 227L) */ ((/* 369L, 224L, 228L) */ ((var_1_21) << (var_1_1))) < (var_1_15))) {
		/* 373L, 243L) */ var_1_44 = (
			/* 376L, 242L) */ (abs (
				/* 377L, 241L) */ ((
					var_1_37
				) + (
					var_1_38
				))
			))
		);
	}


	// From: CodeObject7
	/* 381L, 251L) */ var_1_45 = (
		var_1_20
	);


	// From: CodeObject8
	/* 386L, 259L) */ var_1_46 = (
		0
	);


	// From: CodeObject9
	/* 391L, 267L) */ var_1_47 = (
		var_1_48
	);


	// From: Req1Batch112Filler_PS_CI
	signed long int stepLocal_0 = last_1_var_1_11;
	/* 14L, 17L, 284L, 295L, 889L, 917L) */ if (/* 7L, 4L, 5L, 285L, 296L, 882L, 910L) */ ((last_1_var_1_14) != (stepLocal_0))) {
		/* 13L, 16L, 288L, 299L, 888L, 916L) */ var_1_1 = (
			/* 12L, 15L, 291L, 302L, 887L, 915L) */ ((
				var_1_4
			) - (
				100000000u
			))
		);
	}


	// From: Req3Batch112Filler_PS_CI
	unsigned char stepLocal_2 = var_1_9;
	unsigned long int stepLocal_1 = /* 937L, 76L, 80L, 424L, 445L) */ ((/* 938L, 74L, 81L, 425L, 446L) */ ((var_1_4) - (var_1_10))) | (var_1_1));
	/* 959L, 103L, 418L, 439L) */ if (/* 947L, 65L, 66L, 419L, 440L) */ ((stepLocal_2) && (var_1_12))) {
		/* 958L, 101L, 422L, 443L) */ if (/* 949L, 78L, 79L, 423L, 444L) */ ((stepLocal_1) > (var_1_1))) {
			/* 953L, 96L, 430L, 451L) */ var_1_11 = (
				var_1_13
			);
		} else {
			/* 957L, 100L, 434L, 455L) */ var_1_11 = (
				-32
			);
		}
	}


	// From: Req5Batch112Filler_PS_CI
	/* 975L, 148L, 543L, 557L) */ if (/* 976L, 129L, 130L, 544L, 558L) */ ((/* 977L, 125L, 131L, 545L, 559L) */ ((var_1_16) - (var_1_17))) < (/* 980L, 128L, 134L, 548L, 562L) */ ((var_1_10) - (var_1_1))))) {
		/* 983L, 147L, 551L, 565L) */ var_1_15 = (
			1
		);
	}


	// From: Req4Batch112Filler_PS_CI
	/* 965L, 116L, 503L, 513L) */ var_1_14 = (
		/* 968L, 115L, 506L, 516L) */ (max (
			/* 968L, 115L, 506L, 516L) */ (
				/* 969L, 113L, 507L, 517L) */ ((
					var_1_15
				) + (
					var_1_10
				))
			) , (
				var_1_4
			)
		))
	);


	// From: Req2Batch112Filler_PS_CI
	/* 923L, 47L, 360L, 375L) */ if (/* 924L, 27L, 28L, 361L, 376L) */ ((/* 925L, 25L, 29L, 362L, 377L) */ ((var_1_6) * (var_1_7))) >= (var_1_8))) {
		/* 929L, 45L, 366L, 381L) */ if (var_1_9) {
			/* 931L, 44L, 368L, 383L) */ var_1_5 = (
				var_1_10
			);
		}
	}


	// From: Req6Batch112Filler_PS_CI
	/* 989L, 258L, 599L, 657L) */ if (/* 990L, 166L, 167L, 600L, 658L) */ ((/* 991L, 162L, 168L, 601L, 659L) */ ((/* 992L, 158L, 169L, 602L, 660L) */ ((var_1_19) + (var_1_20))) - (/* 995L, 161L, 172L, 605L, 663L) */ ((var_1_17) + (var_1_16))))) > (/* 998L, 165L, 175L, 608L, 666L) */ ((var_1_4) - (var_1_10))))) {
		/* 1001L, 210L, 611L, 669L) */ if (/* 1002L, 191L, 192L, 612L, 670L) */ ((var_1_1) > (var_1_20))) {
			/* 1005L, 205L, 615L, 673L) */ var_1_18 = (
				/* 1008L, 204L, 618L, 676L) */ ((
					/* 1009L, 202L, 619L, 677L) */ ((
						var_1_21
					) - (
						var_1_17
					))
				) + (
					last_1_var_1_18
				))
			);
		} else {
			/* 1014L, 209L, 624L, 682L) */ var_1_18 = (
				var_1_17
			);
		}
	} else {
		/* 1018L, 256L, 628L, 686L) */ if (/* 1019L, 218L, 219L, 629L, 687L) */ ((/* 1020L, 216L, 220L, 630L, 688L) */ ((/* 1021L, 214L, 221L, 631L, 689L) */ ((var_1_16) % (var_1_21))) % (var_1_22))) > (last_1_var_1_18))) {
			/* 1027L, 239L, 637L, 695L) */ var_1_18 = (
				/* 1030L, 238L, 640L, 698L) */ ((
					/* 1031L, 236L, 641L, 699L) */ (abs (
						var_1_23
					))
				) - (
					var_1_17
				))
			);
		} else {
			/* 1034L, 254L, 644L, 702L) */ if (/* 1035L, 241L, 242L, 645L, 703L) */ (! (var_1_9))) {
				/* 1037L, 249L, 647L, 705L) */ var_1_18 = (
					var_1_21
				);
			} else {
				/* 1041L, 253L, 651L, 709L) */ var_1_18 = (
					var_1_10
				);
			}
		}
	}


	// From: Req7Batch112Filler_PS_CI
	/* 1047L, 269L, 831L, 837L) */ var_1_24 = (
		var_1_25
	);


	// From: Req8Batch112Filler_PS_CI
	/* 1053L, 279L, 855L, 861L) */ var_1_26 = (
		10
	);
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 2147483647);
	assume_abort_if_not(var_1_4 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -127);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 127);
	assume_abort_if_not(var_1_16 <= 255);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 127);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 1073741823);
	assume_abort_if_not(var_1_19 <= 2147483648);
	var_1_20 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_20 >= 1073741824);
	assume_abort_if_not(var_1_20 <= 2147483647);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 16383);
	assume_abort_if_not(var_1_21 <= 32767);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 65535);
	assume_abort_if_not(var_1_22 != 0);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 32767);
	assume_abort_if_not(var_1_23 <= 65534);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_36 >= -461168.6018427383000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_37 >= -461168.6018427383000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_11 = var_1_11;
	last_1_var_1_14 = var_1_14;
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (/* 396L, 4L, 8L, 307L, 318L, 895L, 1059L, 21L) */ ((last_1_var_1_14) != (last_1_var_1_11))) {
	}
	if (/* 411L, 27L, 33L, 391L, 406L, 1074L) */ ((/* 412L, 25L, 34L, 392L, 407L, 1075L) */ ((var_1_6) * (var_1_7))) >= (var_1_8))) {
		if (var_1_9) {
		}
	}
	if (/* 424L, 65L, 69L, 461L, 482L, 1087L) */ ((var_1_9) && (var_1_12))) {
		if (/* 428L, 78L, 86L, 465L, 486L, 1091L) */ ((/* 429L, 76L, 87L, 466L, 487L, 1092L) */ ((/* 430L, 74L, 88L, 467L, 488L, 1093L) */ ((var_1_4) - (var_1_10))) | (var_1_1))) > (var_1_1))) {
		} else {
		}
	}
	if (/* 456L, 129L, 137L, 572L, 586L, 1119L) */ ((/* 457L, 125L, 138L, 573L, 587L, 1120L) */ ((var_1_16) - (var_1_17))) < (/* 460L, 128L, 141L, 576L, 590L, 1123L) */ ((var_1_10) - (var_1_1))))) {
	}
	if (/* 470L, 166L, 178L, 716L, 774L, 1133L) */ ((/* 471L, 162L, 179L, 717L, 775L, 1134L) */ ((/* 472L, 158L, 180L, 718L, 776L, 1135L) */ ((var_1_19) + (var_1_20))) - (/* 475L, 161L, 183L, 721L, 779L, 1138L) */ ((var_1_17) + (var_1_16))))) > (/* 478L, 165L, 186L, 724L, 782L, 1141L) */ ((var_1_4) - (var_1_10))))) {
		if (/* 482L, 191L, 195L, 728L, 786L, 1145L) */ ((var_1_1) > (var_1_20))) {
		} else {
		}
	} else {
		if (/* 499L, 218L, 226L, 745L, 803L, 1162L) */ ((/* 500L, 216L, 227L, 746L, 804L, 1163L) */ ((/* 501L, 214L, 228L, 747L, 805L, 1164L) */ ((var_1_16) % (var_1_21))) % (var_1_22))) > (last_1_var_1_18))) {
		} else {
			if (/* 515L, 241L, 244L, 761L, 819L, 1178L) */ (! (var_1_9))) {
			} else {
			}
		}
	}
	return /* 544L) */ ((
	/* 543L) */ ((
		/* 542L) */ ((
			/* 541L) */ ((
				/* 540L) */ ((
					/* 539L) */ ((
						/* 538L) */ ((
							/* 395L, 18L, 306L, 317L, 902L, 1058L, 28L) */ ((
								/* 396L, 4L, 8L, 307L, 318L, 895L, 1059L, 21L) */ ((
									last_1_var_1_14
								) != (
									last_1_var_1_11
								))
							) ? (
								/* 401L, 16L, 310L, 321L, 901L, 1064L, 27L) */ ((
									var_1_1
								) == (
									/* 401L, 16L, 310L, 321L, 901L, 1064L, 27L) */ ((unsigned long int) (
										/* 404L, 15L, 313L, 324L, 900L, 1067L, 26L) */ ((
											var_1_4
										) - (
											100000000u
										))
									))
								))
							) : (
								1
							))
						) && (
							/* 410L, 48L, 390L, 405L, 1073L) */ ((
								/* 411L, 27L, 33L, 391L, 406L, 1074L) */ ((
									/* 412L, 25L, 34L, 392L, 407L, 1075L) */ ((
										var_1_6
									) * (
										var_1_7
									))
								) >= (
									var_1_8
								))
							) ? (
								/* 416L, 46L, 396L, 411L, 1079L) */ ((
									var_1_9
								) ? (
									/* 418L, 44L, 398L, 413L, 1081L) */ ((
										var_1_5
									) == (
										/* 418L, 44L, 398L, 413L, 1081L) */ ((unsigned char) (
											var_1_10
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
						/* 423L, 104L, 460L, 481L, 1086L) */ ((
							/* 424L, 65L, 69L, 461L, 482L, 1087L) */ ((
								var_1_9
							) && (
								var_1_12
							))
						) ? (
							/* 427L, 102L, 464L, 485L, 1090L) */ ((
								/* 428L, 78L, 86L, 465L, 486L, 1091L) */ ((
									/* 429L, 76L, 87L, 466L, 487L, 1092L) */ ((
										/* 430L, 74L, 88L, 467L, 488L, 1093L) */ ((
											var_1_4
										) - (
											var_1_10
										))
									) | (
										var_1_1
									))
								) > (
									var_1_1
								))
							) ? (
								/* 435L, 96L, 472L, 493L, 1098L) */ ((
									var_1_11
								) == (
									/* 435L, 96L, 472L, 493L, 1098L) */ ((signed char) (
										var_1_13
									))
								))
							) : (
								/* 439L, 100L, 476L, 497L, 1102L) */ ((
									var_1_11
								) == (
									/* 439L, 100L, 476L, 497L, 1102L) */ ((signed char) (
										-32
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 445L, 116L, 523L, 533L, 1108L) */ ((
						var_1_14
					) == (
						/* 445L, 116L, 523L, 533L, 1108L) */ ((unsigned long int) (
							/* 448L, 115L, 526L, 536L, 1111L) */ (max (
								/* 448L, 115L, 526L, 536L, 1111L) */ (
									/* 449L, 113L, 527L, 537L, 1112L) */ ((
										var_1_15
									) + (
										var_1_10
									))
								) , (
									var_1_4
								)
							))
						))
					))
				))
			) && (
				/* 455L, 149L, 571L, 585L, 1118L) */ ((
					/* 456L, 129L, 137L, 572L, 586L, 1119L) */ ((
						/* 457L, 125L, 138L, 573L, 587L, 1120L) */ ((
							var_1_16
						) - (
							var_1_17
						))
					) < (
						/* 460L, 128L, 141L, 576L, 590L, 1123L) */ ((
							var_1_10
						) - (
							var_1_1
						))
					))
				) ? (
					/* 463L, 147L, 579L, 593L, 1126L) */ ((
						var_1_15
					) == (
						/* 463L, 147L, 579L, 593L, 1126L) */ ((unsigned short int) (
							1
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 469L, 259L, 715L, 773L, 1132L) */ ((
				/* 470L, 166L, 178L, 716L, 774L, 1133L) */ ((
					/* 471L, 162L, 179L, 717L, 775L, 1134L) */ ((
						/* 472L, 158L, 180L, 718L, 776L, 1135L) */ ((
							var_1_19
						) + (
							var_1_20
						))
					) - (
						/* 475L, 161L, 183L, 721L, 779L, 1138L) */ ((
							var_1_17
						) + (
							var_1_16
						))
					))
				) > (
					/* 478L, 165L, 186L, 724L, 782L, 1141L) */ ((
						var_1_4
					) - (
						var_1_10
					))
				))
			) ? (
				/* 481L, 211L, 727L, 785L, 1144L) */ ((
					/* 482L, 191L, 195L, 728L, 786L, 1145L) */ ((
						var_1_1
					) > (
						var_1_20
					))
				) ? (
					/* 485L, 205L, 731L, 789L, 1148L) */ ((
						var_1_18
					) == (
						/* 485L, 205L, 731L, 789L, 1148L) */ ((unsigned short int) (
							/* 488L, 204L, 734L, 792L, 1151L) */ ((
								/* 489L, 202L, 735L, 793L, 1152L) */ ((
									var_1_21
								) - (
									var_1_17
								))
							) + (
								last_1_var_1_18
							))
						))
					))
				) : (
					/* 494L, 209L, 740L, 798L, 1157L) */ ((
						var_1_18
					) == (
						/* 494L, 209L, 740L, 798L, 1157L) */ ((unsigned short int) (
							var_1_17
						))
					))
				))
			) : (
				/* 498L, 257L, 744L, 802L, 1161L) */ ((
					/* 499L, 218L, 226L, 745L, 803L, 1162L) */ ((
						/* 500L, 216L, 227L, 746L, 804L, 1163L) */ ((
							/* 501L, 214L, 228L, 747L, 805L, 1164L) */ ((
								var_1_16
							) % (
								var_1_21
							))
						) % (
							var_1_22
						))
					) > (
						last_1_var_1_18
					))
				) ? (
					/* 507L, 239L, 753L, 811L, 1170L) */ ((
						var_1_18
					) == (
						/* 507L, 239L, 753L, 811L, 1170L) */ ((unsigned short int) (
							/* 510L, 238L, 756L, 814L, 1173L) */ ((
								/* 511L, 236L, 757L, 815L, 1174L) */ (abs (
									var_1_23
								))
							) - (
								var_1_17
							))
						))
					))
				) : (
					/* 514L, 255L, 760L, 818L, 1177L) */ ((
						/* 515L, 241L, 244L, 761L, 819L, 1178L) */ (! (
							var_1_9
						))
					) ? (
						/* 517L, 249L, 763L, 821L, 1180L) */ ((
							var_1_18
						) == (
							/* 517L, 249L, 763L, 821L, 1180L) */ ((unsigned short int) (
								var_1_21
							))
						))
					) : (
						/* 521L, 253L, 767L, 825L, 1184L) */ ((
							var_1_18
						) == (
							/* 521L, 253L, 767L, 825L, 1184L) */ ((unsigned short int) (
								var_1_10
							))
						))
					))
				))
			))
		))
	) && (
		/* 527L, 269L, 843L, 849L, 1190L) */ ((
			var_1_24
		) == (
			/* 527L, 269L, 843L, 849L, 1190L) */ ((double) (
				var_1_25
			))
		))
	))
) && (
	/* 533L, 279L, 867L, 873L, 1196L) */ ((
		var_1_26
	) == (
		/* 533L, 279L, 867L, 873L, 1196L) */ ((signed short int) (
			10
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
