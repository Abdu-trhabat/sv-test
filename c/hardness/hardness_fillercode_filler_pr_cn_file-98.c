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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch98Filler_PR_CN.c", 13, "reach_error"); }
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
signed long int var_1_1 = -64;
signed short int var_1_3 = 100;
signed short int var_1_4 = -10;
signed short int var_1_5 = 100;
double var_1_6 = 0.5;
double var_1_7 = 16.5;
double var_1_8 = 7.4;
unsigned short int var_1_9 = 4;
unsigned char var_1_10 = 0;
unsigned long int var_1_11 = 1000000000;
unsigned short int var_1_12 = 256;
signed short int var_1_13 = 64;
unsigned short int var_1_14 = 63836;
signed char var_1_15 = -8;
signed char var_1_16 = 8;
signed short int var_1_17 = 50;
signed short int var_1_18 = 10;
signed short int var_1_19 = 10000;
signed char var_1_20 = -2;
float var_1_21 = 3.2;
unsigned long int var_1_22 = 128;
unsigned long int var_1_23 = 2;
unsigned long int var_1_24 = 16;
unsigned long int var_1_25 = 2686167646;
unsigned long int var_1_26 = 5;
float var_1_27 = 5.5;
unsigned char var_1_28 = 5;
unsigned char var_1_29 = 1;
signed short int var_1_30 = -4;
float var_1_31 = 256.75;
float var_1_32 = 127.5;
double var_1_33 = 127.85;
signed long int var_1_34 = 4;
double var_1_35 = 7.25;
double var_1_36 = 0.0;
double var_1_37 = 0.25;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 0;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_17 = 50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch98Filler_PR_CN
	signed long int stepLocal_3 = /* 5L, 8L, 12L, 282L, 326L, 877L, 984L) */ ((/* 3L, 6L, 13L, 283L, 327L, 875L, 985L) */ ((var_1_3) / (var_1_4))) & (8));
	signed short int stepLocal_2 = var_1_3;
	signed long int stepLocal_1 = /* 15L, 38L, 42L, 294L, 338L, 888L, 974L) */ ((var_1_3) / (/* 14L, 37L, 44L, 296L, 340L, 887L, 976L) */ (min (/* 14L, 37L, 44L, 296L, 340L, 887L, 976L) */ (var_1_4) , (var_1_5)))));
	signed long int stepLocal_0 = last_1_var_1_17;
	/* 62L, 88L, 279L, 323L, 918L, 1024L) */ if (/* 27L, 9L, 10L, 280L, 324L, 878L, 992L) */ ((last_1_var_1_17) <= (stepLocal_3))) {
		/* 49L, 67L, 287L, 331L, 904L, 1012L) */ if (/* 30L, 26L, 27L, 288L, 332L, 881L, 994L) */ ((-16) <= (stepLocal_2))) {
			/* 48L, 65L, 291L, 335L, 903L, 1011L) */ if (/* 34L, 39L, 40L, 292L, 336L, 889L, 997L) */ ((last_1_var_1_17) != (stepLocal_1))) {
				/* 41L, 59L, 299L, 343L, 896L, 1004L) */ var_1_1 = (
					/* 40L, 58L, 302L, 346L, 895L, 1003L) */ (max (
						/* 40L, 58L, 302L, 346L, 895L, 1003L) */ (
							var_1_3
						) , (
							last_1_var_1_17
						)
					))
				);
			} else {
				/* 47L, 64L, 305L, 349L, 902L, 1010L) */ var_1_1 = (
					/* 46L, 63L, 308L, 352L, 901L, 1009L) */ (abs (
						last_1_var_1_17
					))
				);
			}
		}
	} else {
		/* 61L, 86L, 310L, 354L, 917L, 1023L) */ if (/* 52L, 71L, 72L, 311L, 355L, 908L, 1014L) */ ((var_1_3) <= (stepLocal_0))) {
			/* 56L, 81L, 314L, 358L, 912L, 1018L) */ var_1_1 = (
				var_1_4
			);
		} else {
			/* 60L, 85L, 318L, 362L, 916L, 1022L) */ var_1_1 = (
				var_1_3
			);
		}
	}


	// From: CodeObject6
	/* 369L) */ if (var_1_39) {
		/* 368L) */ var_1_38 = (
			/* 367L) */ (min (
				/* 367L) */ (
					/* 365L) */ (abs (
						var_1_29
					))
				) , (
					var_1_34
				)
			))
		);
	}


	// From: Req3Batch98Filler_PR_CN
	/* 1044L, 141L, 504L, 518L) */ if (var_1_10) {
		/* 1046L, 139L, 506L, 520L) */ if (/* 1047L, 124L, 125L, 507L, 521L) */ ((var_1_4) < (/* 1049L, 123L, 127L, 509L, 523L) */ ((var_1_1) + (var_1_5))))) {
			/* 1052L, 138L, 512L, 526L) */ var_1_9 = (
				16
			);
		}
	}


	// From: Req4Batch98Filler_PR_CN
	/* 1067L, 157L, 569L, 589L) */ var_1_11 = (
		/* 1070L, 156L, 572L, 592L) */ (abs (
			/* 1071L, 155L, 573L, 593L) */ (max (
				/* 1071L, 155L, 573L, 593L) */ (
					2u
				) , (
					/* 1073L, 154L, 575L, 595L) */ ((
						3986216790u
					) - (
						var_1_9
					))
				)
			))
		))
	);


	// From: CodeObject2
	/* 219L) */ var_1_28 = (
		var_1_29
	);


	// From: CodeObject4
	/* 270L) */ if (/* 241L, 240L) */ ((/* 242L, 236L) */ ((var_1_29) | (/* 244L, 235L) */ ((256u) + (var_1_23))))) > (/* 247L, 239L) */ ((var_1_25) - (var_1_26))))) {
		/* 265L) */ var_1_31 = (
			/* 264L) */ (min (
				/* 264L) */ (
					var_1_27
				) , (
					/* 263L) */ (abs (
						var_1_32
					))
				)
			))
		);
	} else {
		/* 269L) */ var_1_31 = (
			var_1_27
		);
	}


	// From: Req2Batch98Filler_PR_CN
	/* 1032L, 109L, 456L, 468L) */ if (/* 1033L, 96L, 97L, 457L, 469L) */ ((var_1_11) <= (var_1_3))) {
		/* 1036L, 108L, 460L, 472L) */ var_1_6 = (
			/* 1039L, 107L, 463L, 475L) */ ((
				var_1_7
			) + (
				var_1_8
			))
		);
	}


	// From: CodeObject5
	/* 353L) */ if (/* 283L, 282L) */ ((var_1_28) >= (/* 285L, 281L) */ (max (/* 285L, 281L) */ (/* 286L, 277L) */ ((var_1_23) ^ (var_1_25))) , (/* 289L, 280L) */ ((var_1_24) >> (var_1_34)))))))) {
		/* 318L) */ if (/* 304L, 303L) */ ((var_1_23) <= (var_1_24))) {
			/* 317L) */ var_1_33 = (
				/* 316L) */ (min (
					/* 316L) */ (
						var_1_27
					) , (
						/* 315L) */ (max (
							/* 315L) */ (
								var_1_32
							) , (
								var_1_35
							)
						))
					)
				))
			);
		}
	} else {
		/* 351L) */ if (/* 324L, 323L) */ ((var_1_24) >= (/* 326L, 322L) */ (abs (var_1_29))))) {
			/* 341L) */ var_1_33 = (
				/* 340L) */ (abs (
					/* 339L) */ ((
						/* 335L) */ (abs (
							var_1_35
						))
					) - (
						/* 338L) */ ((
							var_1_36
						) - (
							var_1_37
						))
					))
				))
			);
		} else {
			/* 350L) */ var_1_33 = (
				/* 349L) */ (abs (
					/* 348L) */ (min (
						/* 348L) */ (
							var_1_27
						) , (
							/* 347L) */ (max (
								/* 347L) */ (
									var_1_37
								) , (
									9.999999925E7
								)
							))
						)
					))
				))
			);
		}
	}


	// From: Req7Batch98Filler_PR_CN
	/* 1105L, 257L, 739L, 767L) */ if (/* 1106L, 231L, 232L, 740L, 768L) */ ((var_1_6) <= (var_1_8))) {
		/* 1109L, 249L, 743L, 771L) */ var_1_17 = (
			/* 1112L, 248L, 746L, 774L) */ ((
				/* 1113L, 242L, 747L, 775L) */ ((
					var_1_16
				) + (
					25
				))
			) + (
				/* 1116L, 247L, 750L, 778L) */ ((
					var_1_18
				) - (
					/* 1118L, 246L, 752L, 780L) */ ((
						var_1_19
					) - (
						1
					))
				))
			))
		);
	} else {
		/* 1121L, 256L, 755L, 783L) */ var_1_17 = (
			/* 1124L, 255L, 758L, 786L) */ (max (
				/* 1124L, 255L, 758L, 786L) */ (
					/* 1125L, 253L, 759L, 787L) */ (abs (
						var_1_19
					))
				) , (
					var_1_18
				)
			))
		);
	}


	// From: CodeObject3
	/* 227L) */ var_1_30 = (
		var_1_28
	);


	// From: Req5Batch98Filler_PR_CN
	/* 1078L, 211L, 640L, 658L) */ if (/* 1079L, 188L, 189L, 641L, 659L) */ ((/* 1080L, 186L, 190L, 642L, 660L) */ ((var_1_5) * (/* 1082L, 185L, 192L, 644L, 662L) */ ((var_1_3) - (var_1_13))))) <= (var_1_4))) {
		/* 1086L, 210L, 648L, 666L) */ var_1_12 = (
			/* 1089L, 209L, 651L, 669L) */ ((
				var_1_14
			) - (
				/* 1091L, 208L, 653L, 671L) */ (max (
					/* 1091L, 208L, 653L, 671L) */ (
						var_1_3
					) , (
						var_1_13
					)
				))
			))
		);
	}


	// From: Req6Batch98Filler_PR_CN
	/* 1096L, 222L, 712L, 718L) */ var_1_15 = (
		var_1_16
	);


	// From: CodeObject1
	/* 212L) */ if (/* 124L, 123L) */ ((/* 125L, 119L) */ (max (/* 125L, 119L) */ (/* 126L, 117L) */ (abs (var_1_22))) , (2u)))) > (/* 129L, 122L) */ ((var_1_23) & (var_1_24))))) {
		/* 206L) */ if (/* 153L, 152L) */ ((var_1_24) >= (/* 155L, 151L) */ ((var_1_25) - (var_1_26))))) {
			/* 204L) */ if (/* 166L, 165L) */ ((var_1_25) >= (var_1_22))) {
				/* 175L) */ var_1_21 = (
					var_1_27
				);
			} else {
				/* 203L) */ var_1_21 = (
					15.2f
				);
			}
		}
	} else {
		/* 211L) */ var_1_21 = (
			var_1_27
		);
	}


	// From: Req8Batch98Filler_PR_CN
	/* 1130L, 274L, 848L, 854L) */ var_1_20 = (
		var_1_16
	);
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32768);
	assume_abort_if_not(var_1_4 <= 32767);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	assume_abort_if_not(var_1_5 != 0);
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 16383);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 8191);
	assume_abort_if_not(var_1_19 <= 16383);
	var_1_22 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 4294967295);
	var_1_23 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 4294967295);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967295);
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 2147483647);
	assume_abort_if_not(var_1_25 <= 4294967295);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 254);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 31);
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 4611686.018427383000e+12F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	if (/* 372L, 9L, 17L, 368L, 412L, 927L, 1136L, 72L) */ ((last_1_var_1_17) <= (/* 375L, 8L, 19L, 370L, 414L, 926L, 1139L, 71L) */ ((/* 376L, 6L, 20L, 371L, 415L, 924L, 1140L, 69L) */ ((var_1_3) / (var_1_4))) & (8))))) {
		if (/* 381L, 26L, 30L, 376L, 420L, 930L, 1145L, 75L) */ ((-16) <= (var_1_3))) {
			if (/* 385L, 39L, 47L, 380L, 424L, 938L, 1149L, 83L) */ ((last_1_var_1_17) != (/* 388L, 38L, 49L, 382L, 426L, 937L, 1152L, 82L) */ ((var_1_3) / (/* 390L, 37L, 51L, 384L, 428L, 936L, 1154L, 81L) */ (min (/* 390L, 37L, 51L, 384L, 428L, 936L, 1154L, 81L) */ (var_1_4) , (var_1_5)))))))) {
			} else {
			}
		}
	} else {
		if (/* 407L, 71L, 75L, 399L, 443L, 957L, 1171L, 102L) */ ((var_1_3) <= (last_1_var_1_17))) {
		} else {
		}
	}
	if (/* 422L, 96L, 100L, 481L, 493L, 1186L) */ ((var_1_11) <= (var_1_3))) {
	}
	if (var_1_10) {
		if (/* 436L, 124L, 130L, 535L, 549L, 1200L) */ ((var_1_4) < (/* 438L, 123L, 132L, 537L, 551L, 1202L) */ ((var_1_1) + (var_1_5))))) {
		}
	}
	if (/* 468L, 188L, 196L, 677L, 695L, 1232L) */ ((/* 469L, 186L, 197L, 678L, 696L, 1233L) */ ((var_1_5) * (/* 471L, 185L, 199L, 680L, 698L, 1235L) */ ((var_1_3) - (var_1_13))))) <= (var_1_4))) {
	}
	if (/* 495L, 231L, 235L, 796L, 824L, 1259L) */ ((var_1_6) <= (var_1_8))) {
	} else {
	}
	return /* 530L) */ ((
	/* 529L) */ ((
		/* 528L) */ ((
			/* 527L) */ ((
				/* 526L) */ ((
					/* 525L) */ ((
						/* 524L) */ ((
							/* 371L, 89L, 367L, 411L, 967L, 1135L, 112L) */ ((
								/* 372L, 9L, 17L, 368L, 412L, 927L, 1136L, 72L) */ ((
									last_1_var_1_17
								) <= (
									/* 375L, 8L, 19L, 370L, 414L, 926L, 1139L, 71L) */ ((
										/* 376L, 6L, 20L, 371L, 415L, 924L, 1140L, 69L) */ ((
											var_1_3
										) / (
											var_1_4
										))
									) & (
										8
									))
								))
							) ? (
								/* 380L, 68L, 375L, 419L, 953L, 1144L, 98L) */ ((
									/* 381L, 26L, 30L, 376L, 420L, 930L, 1145L, 75L) */ ((
										-16
									) <= (
										var_1_3
									))
								) ? (
									/* 384L, 66L, 379L, 423L, 952L, 1148L, 97L) */ ((
										/* 385L, 39L, 47L, 380L, 424L, 938L, 1149L, 83L) */ ((
											last_1_var_1_17
										) != (
											/* 388L, 38L, 49L, 382L, 426L, 937L, 1152L, 82L) */ ((
												var_1_3
											) / (
												/* 390L, 37L, 51L, 384L, 428L, 936L, 1154L, 81L) */ (min (
													/* 390L, 37L, 51L, 384L, 428L, 936L, 1154L, 81L) */ (
														var_1_4
													) , (
														var_1_5
													)
												))
											))
										))
									) ? (
										/* 393L, 59L, 387L, 431L, 945L, 1157L, 90L) */ ((
											var_1_1
										) == (
											/* 393L, 59L, 387L, 431L, 945L, 1157L, 90L) */ ((signed long int) (
												/* 396L, 58L, 390L, 434L, 944L, 1160L, 89L) */ (max (
													/* 396L, 58L, 390L, 434L, 944L, 1160L, 89L) */ (
														var_1_3
													) , (
														last_1_var_1_17
													)
												))
											))
										))
									) : (
										/* 400L, 64L, 393L, 437L, 951L, 1164L, 96L) */ ((
											var_1_1
										) == (
											/* 400L, 64L, 393L, 437L, 951L, 1164L, 96L) */ ((signed long int) (
												/* 403L, 63L, 396L, 440L, 950L, 1167L, 95L) */ (abs (
													last_1_var_1_17
												))
											))
										))
									))
								) : (
									1
								))
							) : (
								/* 406L, 87L, 398L, 442L, 966L, 1170L, 111L) */ ((
									/* 407L, 71L, 75L, 399L, 443L, 957L, 1171L, 102L) */ ((
										var_1_3
									) <= (
										last_1_var_1_17
									))
								) ? (
									/* 411L, 81L, 402L, 446L, 961L, 1175L, 106L) */ ((
										var_1_1
									) == (
										/* 411L, 81L, 402L, 446L, 961L, 1175L, 106L) */ ((signed long int) (
											var_1_4
										))
									))
								) : (
									/* 415L, 85L, 406L, 450L, 965L, 1179L, 110L) */ ((
										var_1_1
									) == (
										/* 415L, 85L, 406L, 450L, 965L, 1179L, 110L) */ ((signed long int) (
											var_1_3
										))
									))
								))
							))
						) && (
							/* 421L, 110L, 480L, 492L, 1185L) */ ((
								/* 422L, 96L, 100L, 481L, 493L, 1186L) */ ((
									var_1_11
								) <= (
									var_1_3
								))
							) ? (
								/* 425L, 108L, 484L, 496L, 1189L) */ ((
									var_1_6
								) == (
									/* 425L, 108L, 484L, 496L, 1189L) */ ((double) (
										/* 428L, 107L, 487L, 499L, 1192L) */ ((
											var_1_7
										) + (
											var_1_8
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 433L, 142L, 532L, 546L, 1197L) */ ((
							var_1_10
						) ? (
							/* 435L, 140L, 534L, 548L, 1199L) */ ((
								/* 436L, 124L, 130L, 535L, 549L, 1200L) */ ((
									var_1_4
								) < (
									/* 438L, 123L, 132L, 537L, 551L, 1202L) */ ((
										var_1_1
									) + (
										var_1_5
									))
								))
							) ? (
								/* 441L, 138L, 540L, 554L, 1205L) */ ((
									var_1_9
								) == (
									/* 441L, 138L, 540L, 554L, 1205L) */ ((unsigned short int) (
										16
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
					/* 456L, 157L, 609L, 629L, 1220L) */ ((
						var_1_11
					) == (
						/* 456L, 157L, 609L, 629L, 1220L) */ ((unsigned long int) (
							/* 459L, 156L, 612L, 632L, 1223L) */ (abs (
								/* 460L, 155L, 613L, 633L, 1224L) */ (max (
									/* 460L, 155L, 613L, 633L, 1224L) */ (
										2u
									) , (
										/* 462L, 154L, 615L, 635L, 1226L) */ ((
											3986216790u
										) - (
											var_1_9
										))
									)
								))
							))
						))
					))
				))
			) && (
				/* 467L, 212L, 676L, 694L, 1231L) */ ((
					/* 468L, 188L, 196L, 677L, 695L, 1232L) */ ((
						/* 469L, 186L, 197L, 678L, 696L, 1233L) */ ((
							var_1_5
						) * (
							/* 471L, 185L, 199L, 680L, 698L, 1235L) */ ((
								var_1_3
							) - (
								var_1_13
							))
						))
					) <= (
						var_1_4
					))
				) ? (
					/* 475L, 210L, 684L, 702L, 1239L) */ ((
						var_1_12
					) == (
						/* 475L, 210L, 684L, 702L, 1239L) */ ((unsigned short int) (
							/* 478L, 209L, 687L, 705L, 1242L) */ ((
								var_1_14
							) - (
								/* 480L, 208L, 689L, 707L, 1244L) */ (max (
									/* 480L, 208L, 689L, 707L, 1244L) */ (
										var_1_3
									) , (
										var_1_13
									)
								))
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 485L, 222L, 724L, 730L, 1249L) */ ((
				var_1_15
			) == (
				/* 485L, 222L, 724L, 730L, 1249L) */ ((signed char) (
					var_1_16
				))
			))
		))
	) && (
		/* 494L, 258L, 795L, 823L, 1258L) */ ((
			/* 495L, 231L, 235L, 796L, 824L, 1259L) */ ((
				var_1_6
			) <= (
				var_1_8
			))
		) ? (
			/* 498L, 249L, 799L, 827L, 1262L) */ ((
				var_1_17
			) == (
				/* 498L, 249L, 799L, 827L, 1262L) */ ((signed short int) (
					/* 501L, 248L, 802L, 830L, 1265L) */ ((
						/* 502L, 242L, 803L, 831L, 1266L) */ ((
							var_1_16
						) + (
							25
						))
					) + (
						/* 505L, 247L, 806L, 834L, 1269L) */ ((
							var_1_18
						) - (
							/* 507L, 246L, 808L, 836L, 1271L) */ ((
								var_1_19
							) - (
								1
							))
						))
					))
				))
			))
		) : (
			/* 510L, 256L, 811L, 839L, 1274L) */ ((
				var_1_17
			) == (
				/* 510L, 256L, 811L, 839L, 1274L) */ ((signed short int) (
					/* 513L, 255L, 814L, 842L, 1277L) */ (max (
						/* 513L, 255L, 814L, 842L, 1277L) */ (
							/* 514L, 253L, 815L, 843L, 1278L) */ (abs (
								var_1_19
							))
						) , (
							var_1_18
						)
					))
				))
			))
		))
	))
) && (
	/* 519L, 274L, 860L, 866L, 1283L) */ ((
		var_1_20
	) == (
		/* 519L, 274L, 860L, 866L, 1283L) */ ((signed char) (
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
