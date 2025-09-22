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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch172Filler_PR_CI.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 10;
signed char var_1_3 = 5;
unsigned char var_1_4 = 0;
unsigned long int var_1_5 = 100;
signed char var_1_6 = 2;
signed char var_1_7 = -32;
signed short int var_1_8 = -1;
unsigned char var_1_9 = 1;
signed short int var_1_11 = 64;
signed short int var_1_12 = 5;
signed short int var_1_13 = 0;
float var_1_14 = 5.5;
signed long int var_1_15 = 2;
signed long int var_1_16 = 2;
float var_1_17 = 128.5;
float var_1_18 = -0.5;
float var_1_19 = 50.4;
float var_1_20 = 16.75;
signed char var_1_21 = -2;
signed char var_1_22 = 32;
signed char var_1_23 = 5;
unsigned char var_1_24 = 16;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 1;
signed short int var_1_27 = 128;
unsigned long int var_1_29 = 32;
double var_1_30 = -0.729;
double var_1_31 = 10000000.2;
unsigned long int var_1_32 = 256;
unsigned long int var_1_33 = 4;
signed long int var_1_34 = -25;
signed char var_1_35 = 100;
unsigned short int var_1_38 = 8;
unsigned long int var_1_39 = 1;
unsigned short int var_1_40 = 42232;
unsigned short int var_1_44 = 64;
float var_1_45 = 99.75;
unsigned long int var_1_46 = 3963298086;
unsigned short int var_1_47 = 1000;

// Calibration values

// Last'ed variables
signed char last_1_var_1_6 = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch172Filler_PR_CI
	/* 11L, 24L, 260L, 273L, 806L, 824L) */ if (/* 6L, 7L, 8L, 261L, 274L, 801L, 825L) */ ((/* 4L, 5L, 9L, 262L, 275L, 799L, 826L) */ ((last_1_var_1_6) >= (/* 3L, 4L, 11L, 264L, 277L, 798L, 829L) */ (abs (var_1_3))))) || (var_1_4))) {
		/* 10L, 23L, 267L, 280L, 805L, 832L) */ var_1_1 = (
			var_1_5
		);
	}


	// From: CodeObject3
	/* 284L, 81L) */ if (/* 285L, 51L, 52L) */ ((var_1_30) != (var_1_31))) {
		/* 288L, 79L) */ if (/* 289L, 60L, 61L) */ ((var_1_13) <= (var_1_1))) {
			/* 292L, 71L) */ var_1_29 = (
				/* 295L, 70L) */ (abs (
					var_1_5
				))
			);
		} else {
			/* 297L, 78L) */ var_1_29 = (
				/* 300L, 77L) */ (max (
					/* 300L, 77L) */ (
						/* 301L, 75L) */ (abs (
							var_1_5
						))
					) , (
						var_1_5
					)
				))
			);
		}
	}


	// From: CodeObject8
	/* 427L, 270L) */ if (/* 428L, 227L, 228L) */ ((/* 429L, 225L, 229L) */ (max (/* 429L, 225L, 229L) */ (var_1_15) , (var_1_46)))) >= (var_1_16))) {
		/* 433L, 264L) */ if (/* 434L, 240L, 241L) */ ((var_1_39) > (var_1_15))) {
			/* 437L, 258L) */ if (var_1_4) {
				/* 439L, 253L) */ var_1_47 = (
					var_1_16
				);
			} else {
				/* 443L, 257L) */ var_1_47 = (
					var_1_40
				);
			}
		} else {
			/* 447L, 263L) */ var_1_47 = (
				var_1_15
			);
		}
	} else {
		/* 451L, 269L) */ var_1_47 = (
			var_1_15
		);
	}


	// From: Req2Batch172Filler_PR_CI
	/* 839L, 45L, 313L, 324L) */ if (/* 840L, 34L, 35L, 314L, 325L) */ ((var_1_1) > (var_1_5))) {
		/* 843L, 44L, 317L, 328L) */ var_1_6 = (
			var_1_7
		);
	}


	// From: CodeObject7
	/* 403L, 219L) */ if (var_1_9) {
		/* 405L, 217L) */ if (/* 406L, 173L, 174L) */ ((/* 407L, 171L, 175L) */ ((var_1_30) / (var_1_45))) >= (var_1_31))) {
			/* 411L, 215L) */ if (/* 412L, 186L, 187L) */ ((var_1_16) <= (var_1_1))) {
				/* 415L, 213L) */ if (/* 416L, 197L, 198L) */ ((/* 417L, 195L, 199L) */ ((var_1_46) - (var_1_5))) < (var_1_5))) {
					/* 421L, 212L) */ var_1_44 = (
						/* 424L, 211L) */ (abs (
							var_1_15
						))
					);
				}
			}
		}
	}


	// From: Req3Batch172Filler_PR_CI
	/* 849L, 97L, 356L, 381L) */ if (/* 850L, 57L, 58L, 357L, 382L) */ ((var_1_4) && (var_1_9))) {
		/* 853L, 91L, 360L, 385L) */ if (/* 854L, 70L, 71L, 361L, 386L) */ ((var_1_5) == (/* 856L, 69L, 73L, 363L, 388L) */ ((var_1_1) + (/* 858L, 68L, 75L, 365L, 390L) */ (~ (var_1_1))))))) {
			/* 860L, 86L, 367L, 392L) */ var_1_8 = (
				var_1_1
			);
		} else {
			/* 864L, 90L, 371L, 396L) */ var_1_8 = (
				var_1_3
			);
		}
	} else {
		/* 868L, 96L, 375L, 400L) */ var_1_8 = (
			var_1_7
		);
	}


	// From: CodeObject1
	/* 275L, 33L) */ var_1_25 = (
		var_1_26
	);


	// From: CodeObject2
	/* 280L, 41L) */ var_1_27 = (
		var_1_13
	);


	// From: CodeObject4
	/* 305L, 88L) */ var_1_34 = (
		var_1_16
	);


	// From: Req7Batch172Filler_PR_CI
	signed long int stepLocal_3 = 25;
	/* 964L, 245L, 679L, 702L) */ if (/* 945L, 220L, 221L, 680L, 703L) */ ((stepLocal_3) < (var_1_1))) {
		/* 955L, 236L, 683L, 706L) */ var_1_21 = (
			/* 954L, 235L, 686L, 709L) */ ((
				/* 950L, 231L, 687L, 710L) */ ((
					var_1_16
				) + (
					var_1_15
				))
			) - (
				/* 953L, 234L, 690L, 713L) */ ((
					var_1_22
				) + (
					var_1_23
				))
			))
		);
	} else {
		/* 963L, 244L, 693L, 716L) */ var_1_21 = (
			/* 962L, 243L, 696L, 719L) */ (min (
				/* 962L, 243L, 696L, 719L) */ (
					var_1_15
				) , (
					/* 961L, 242L, 698L, 721L) */ ((
						var_1_22
					) - (
						var_1_16
					))
				)
			))
		);
	}


	// From: Req8Batch172Filler_PR_CI
	/* 969L, 254L, 772L, 778L) */ var_1_24 = (
		var_1_16
	);


	// From: Req4Batch172Filler_PR_CI
	signed char stepLocal_0 = var_1_21;
	/* 886L, 122L, 455L, 468L) */ if (/* 877L, 107L, 108L, 456L, 469L) */ ((stepLocal_0) != (var_1_5))) {
		/* 885L, 121L, 459L, 472L) */ var_1_11 = (
			/* 884L, 120L, 462L, 475L) */ (max (
				/* 884L, 120L, 462L, 475L) */ (
					/* 882L, 118L, 463L, 476L) */ ((
						var_1_12
					) - (
						var_1_13
					))
				) , (
					var_1_7
				)
			))
		);
	}


	// From: CodeObject5
	/* 325L, 114L) */ if (/* 326L, 95L, 96L) */ ((var_1_33) >= (var_1_32))) {
		/* 329L, 108L) */ var_1_35 = (
			/* 332L, 107L) */ ((
				/* 333L, 105L) */ (abs (
					var_1_15
				))
			) - (
				var_1_15
			))
		);
	} else {
		/* 336L, 113L) */ var_1_35 = (
			/* 339L, 112L) */ (abs (
				var_1_15
			))
		);
	}


	// From: Req5Batch172Filler_PR_CI
	signed long int stepLocal_1 = /* 891L, 133L, 137L, 510L, 526L) */ ((var_1_13) >> (/* 893L, 132L, 139L, 512L, 528L) */ ((var_1_15) + (var_1_16))));
	/* 906L, 156L, 507L, 523L) */ if (/* 898L, 134L, 135L, 508L, 524L) */ ((var_1_11) > (stepLocal_1))) {
		/* 905L, 155L, 515L, 531L) */ var_1_14 = (
			/* 904L, 154L, 518L, 534L) */ (abs (
				/* 903L, 153L, 519L, 535L) */ ((
					var_1_17
				) + (
					var_1_18
				))
			))
		);
	}


	// From: Req6Batch172Filler_PR_CI
	signed char stepLocal_2 = var_1_3;
	/* 937L, 212L, 571L, 598L) */ if (/* 918L, 168L, 169L, 572L, 599L) */ ((/* 917L, 166L, 170L, 573L, 600L) */ ((/* 915L, 164L, 171L, 574L, 601L) */ ((16) * (var_1_7))) | (-1))) >= (stepLocal_2))) {
		/* 924L, 188L, 579L, 606L) */ var_1_19 = (
			/* 923L, 187L, 582L, 609L) */ ((
				var_1_17
			) + (
				var_1_18
			))
		);
	} else {
		/* 936L, 210L, 585L, 612L) */ if (/* 929L, 193L, 194L, 586L, 613L) */ ((/* 927L, 191L, 195L, 587L, 614L) */ ((var_1_14) / (1.00000000000005E13f))) < (1.875f))) {
			/* 935L, 209L, 591L, 618L) */ var_1_19 = (
				/* 934L, 208L, 594L, 621L) */ ((
					15.45f
				) - (
					var_1_20
				))
			);
		}
	}


	// From: CodeObject6
	/* 372L, 162L) */ if (/* 373L, 124L, 125L) */ ((/* 374L, 122L, 126L) */ ((/* 375L, 120L, 127L) */ ((var_1_16) % (var_1_39))) & (8u))) > (var_1_23))) {
		/* 380L, 146L) */ var_1_38 = (
			/* 383L, 145L) */ (max (
				/* 383L, 145L) */ (
					/* 384L, 143L) */ ((
						var_1_40
					) - (
						var_1_23
					))
				) , (
					25
				)
			))
		);
	} else {
		/* 388L, 161L) */ var_1_38 = (
			/* 391L, 160L) */ (min (
				/* 391L, 160L) */ (
					/* 392L, 153L) */ ((
						/* 393L, 151L) */ (min (
							/* 393L, 151L) */ (
								var_1_23
							) , (
								var_1_16
							)
						))
					) + (
						var_1_16
					))
				) , (
					/* 397L, 159L) */ (max (
						/* 397L, 159L) */ (
							/* 398L, 155L) */ (abs (
								var_1_40
							))
						) , (
							/* 400L, 158L) */ (min (
								/* 400L, 158L) */ (
									256
								) , (
									var_1_16
								)
							))
						)
					))
				)
			))
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -127);
	assume_abort_if_not(var_1_3 <= 127);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_7 >= -127);
	assume_abort_if_not(var_1_7 <= 126);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 32766);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 7);
	var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 7);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -461168.6018427383000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_26 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_26 >= 1);
	assume_abort_if_not(var_1_26 <= 1);
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967294);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967294);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 4294967295);
	assume_abort_if_not(var_1_39 != 0);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 32767);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	assume_abort_if_not(var_1_45 != 0.0F);
	var_1_46 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_46 >= 2147483647);
	assume_abort_if_not(var_1_46 <= 4294967295);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
}

int property(void) {
	if (/* 457L, 7L, 14L, 287L, 300L, 815L, 976L, 20L) */ ((/* 458L, 5L, 15L, 288L, 301L, 813L, 977L, 18L) */ ((last_1_var_1_6) >= (/* 461L, 4L, 17L, 290L, 303L, 812L, 980L, 17L) */ (abs (var_1_3))))) || (var_1_4))) {
	}
	if (/* 472L, 34L, 38L, 336L, 347L, 991L) */ ((var_1_1) > (var_1_5))) {
	}
	if (/* 482L, 57L, 61L, 407L, 432L, 1001L) */ ((var_1_4) && (var_1_9))) {
		if (/* 486L, 70L, 77L, 411L, 436L, 1005L) */ ((var_1_5) == (/* 488L, 69L, 79L, 413L, 438L, 1007L) */ ((var_1_1) + (/* 490L, 68L, 81L, 415L, 440L, 1009L) */ (~ (var_1_1))))))) {
		} else {
		}
	} else {
	}
	if (/* 506L, 107L, 111L, 482L, 495L, 1025L) */ ((var_1_21) != (var_1_5))) {
	}
	if (/* 519L, 134L, 142L, 540L, 556L, 1038L) */ ((var_1_11) > (/* 521L, 133L, 144L, 542L, 558L, 1040L) */ ((var_1_13) >> (/* 523L, 132L, 146L, 544L, 560L, 1042L) */ ((var_1_15) + (var_1_16))))))) {
	}
	if (/* 535L, 168L, 176L, 626L, 653L, 1054L) */ ((/* 536L, 166L, 177L, 627L, 654L, 1055L) */ ((/* 537L, 164L, 178L, 628L, 655L, 1056L) */ ((16) * (var_1_7))) | (-1))) >= (var_1_3))) {
	} else {
		if (/* 549L, 193L, 199L, 640L, 667L, 1068L) */ ((/* 550L, 191L, 200L, 641L, 668L, 1069L) */ ((var_1_14) / (1.00000000000005E13f))) < (1.875f))) {
		}
	}
	if (/* 562L, 220L, 224L, 726L, 749L, 1081L) */ ((25) < (var_1_1))) {
	} else {
	}
	return /* 596L) */ ((
	/* 595L) */ ((
		/* 594L) */ ((
			/* 593L) */ ((
				/* 592L) */ ((
					/* 591L) */ ((
						/* 590L) */ ((
							/* 456L, 25L, 286L, 299L, 820L, 975L, 25L) */ ((
								/* 457L, 7L, 14L, 287L, 300L, 815L, 976L, 20L) */ ((
									/* 458L, 5L, 15L, 288L, 301L, 813L, 977L, 18L) */ ((
										last_1_var_1_6
									) >= (
										/* 461L, 4L, 17L, 290L, 303L, 812L, 980L, 17L) */ (abs (
											var_1_3
										))
									))
								) || (
									var_1_4
								))
							) ? (
								/* 464L, 23L, 293L, 306L, 819L, 983L, 24L) */ ((
									var_1_1
								) == (
									/* 464L, 23L, 293L, 306L, 819L, 983L, 24L) */ ((unsigned long int) (
										var_1_5
									))
								))
							) : (
								1
							))
						) && (
							/* 471L, 46L, 335L, 346L, 990L) */ ((
								/* 472L, 34L, 38L, 336L, 347L, 991L) */ ((
									var_1_1
								) > (
									var_1_5
								))
							) ? (
								/* 475L, 44L, 339L, 350L, 994L) */ ((
									var_1_6
								) == (
									/* 475L, 44L, 339L, 350L, 994L) */ ((signed char) (
										var_1_7
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 481L, 98L, 406L, 431L, 1000L) */ ((
							/* 482L, 57L, 61L, 407L, 432L, 1001L) */ ((
								var_1_4
							) && (
								var_1_9
							))
						) ? (
							/* 485L, 92L, 410L, 435L, 1004L) */ ((
								/* 486L, 70L, 77L, 411L, 436L, 1005L) */ ((
									var_1_5
								) == (
									/* 488L, 69L, 79L, 413L, 438L, 1007L) */ ((
										var_1_1
									) + (
										/* 490L, 68L, 81L, 415L, 440L, 1009L) */ (~ (
											var_1_1
										))
									))
								))
							) ? (
								/* 492L, 86L, 417L, 442L, 1011L) */ ((
									var_1_8
								) == (
									/* 492L, 86L, 417L, 442L, 1011L) */ ((signed short int) (
										var_1_1
									))
								))
							) : (
								/* 496L, 90L, 421L, 446L, 1015L) */ ((
									var_1_8
								) == (
									/* 496L, 90L, 421L, 446L, 1015L) */ ((signed short int) (
										var_1_3
									))
								))
							))
						) : (
							/* 500L, 96L, 425L, 450L, 1019L) */ ((
								var_1_8
							) == (
								/* 500L, 96L, 425L, 450L, 1019L) */ ((signed short int) (
									var_1_7
								))
							))
						))
					))
				) && (
					/* 505L, 123L, 481L, 494L, 1024L) */ ((
						/* 506L, 107L, 111L, 482L, 495L, 1025L) */ ((
							var_1_21
						) != (
							var_1_5
						))
					) ? (
						/* 509L, 121L, 485L, 498L, 1028L) */ ((
							var_1_11
						) == (
							/* 509L, 121L, 485L, 498L, 1028L) */ ((signed short int) (
								/* 512L, 120L, 488L, 501L, 1031L) */ (max (
									/* 512L, 120L, 488L, 501L, 1031L) */ (
										/* 513L, 118L, 489L, 502L, 1032L) */ ((
											var_1_12
										) - (
											var_1_13
										))
									) , (
										var_1_7
									)
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 518L, 157L, 539L, 555L, 1037L) */ ((
					/* 519L, 134L, 142L, 540L, 556L, 1038L) */ ((
						var_1_11
					) > (
						/* 521L, 133L, 144L, 542L, 558L, 1040L) */ ((
							var_1_13
						) >> (
							/* 523L, 132L, 146L, 544L, 560L, 1042L) */ ((
								var_1_15
							) + (
								var_1_16
							))
						))
					))
				) ? (
					/* 526L, 155L, 547L, 563L, 1045L) */ ((
						var_1_14
					) == (
						/* 526L, 155L, 547L, 563L, 1045L) */ ((float) (
							/* 529L, 154L, 550L, 566L, 1048L) */ (abs (
								/* 530L, 153L, 551L, 567L, 1049L) */ ((
									var_1_17
								) + (
									var_1_18
								))
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 534L, 213L, 625L, 652L, 1053L) */ ((
				/* 535L, 168L, 176L, 626L, 653L, 1054L) */ ((
					/* 536L, 166L, 177L, 627L, 654L, 1055L) */ ((
						/* 537L, 164L, 178L, 628L, 655L, 1056L) */ ((
							16
						) * (
							var_1_7
						))
					) | (
						-1
					))
				) >= (
					var_1_3
				))
			) ? (
				/* 542L, 188L, 633L, 660L, 1061L) */ ((
					var_1_19
				) == (
					/* 542L, 188L, 633L, 660L, 1061L) */ ((float) (
						/* 545L, 187L, 636L, 663L, 1064L) */ ((
							var_1_17
						) + (
							var_1_18
						))
					))
				))
			) : (
				/* 548L, 211L, 639L, 666L, 1067L) */ ((
					/* 549L, 193L, 199L, 640L, 667L, 1068L) */ ((
						/* 550L, 191L, 200L, 641L, 668L, 1069L) */ ((
							var_1_14
						) / (
							1.00000000000005E13f
						))
					) < (
						1.875f
					))
				) ? (
					/* 554L, 209L, 645L, 672L, 1073L) */ ((
						var_1_19
					) == (
						/* 554L, 209L, 645L, 672L, 1073L) */ ((float) (
							/* 557L, 208L, 648L, 675L, 1076L) */ ((
								15.45f
							) - (
								var_1_20
							))
						))
					))
				) : (
					1
				))
			))
		))
	) && (
		/* 561L, 246L, 725L, 748L, 1080L) */ ((
			/* 562L, 220L, 224L, 726L, 749L, 1081L) */ ((
				25
			) < (
				var_1_1
			))
		) ? (
			/* 565L, 236L, 729L, 752L, 1084L) */ ((
				var_1_21
			) == (
				/* 565L, 236L, 729L, 752L, 1084L) */ ((signed char) (
					/* 568L, 235L, 732L, 755L, 1087L) */ ((
						/* 569L, 231L, 733L, 756L, 1088L) */ ((
							var_1_16
						) + (
							var_1_15
						))
					) - (
						/* 572L, 234L, 736L, 759L, 1091L) */ ((
							var_1_22
						) + (
							var_1_23
						))
					))
				))
			))
		) : (
			/* 575L, 244L, 739L, 762L, 1094L) */ ((
				var_1_21
			) == (
				/* 575L, 244L, 739L, 762L, 1094L) */ ((signed char) (
					/* 578L, 243L, 742L, 765L, 1097L) */ (min (
						/* 578L, 243L, 742L, 765L, 1097L) */ (
							var_1_15
						) , (
							/* 580L, 242L, 744L, 767L, 1099L) */ ((
								var_1_22
							) - (
								var_1_16
							))
						)
					))
				))
			))
		))
	))
) && (
	/* 585L, 254L, 784L, 790L, 1104L) */ ((
		var_1_24
	) == (
		/* 585L, 254L, 784L, 790L, 1104L) */ ((unsigned char) (
			var_1_16
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
