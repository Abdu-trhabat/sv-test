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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch100Filler_PR_CI.c", 13, "reach_error"); }
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
double var_1_1 = 4.35;
unsigned long int var_1_2 = 25;
signed long int var_1_4 = 50;
double var_1_5 = 8.1;
unsigned short int var_1_6 = 256;
unsigned long int var_1_9 = 2597568899;
unsigned long int var_1_10 = 16;
unsigned long int var_1_11 = 4;
unsigned short int var_1_13 = 4;
unsigned short int var_1_14 = 16;
float var_1_15 = 10.4;
unsigned char var_1_16 = 1;
float var_1_18 = 9.45;
unsigned long int var_1_19 = 8;
signed long int var_1_21 = -2;
double var_1_22 = 2.7;
float var_1_23 = 10.85;
float var_1_24 = 7.4;
double var_1_25 = 255.5;
double var_1_26 = 64.576;
double var_1_27 = 15.4;
signed char var_1_28 = -1;
signed char var_1_29 = 16;
signed short int var_1_30 = 2;
signed char var_1_31 = -5;
signed char var_1_32 = -5;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 0;
signed short int var_1_36 = 32;
signed short int var_1_37 = 16;
signed char var_1_38 = 50;
float var_1_39 = 10.825;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_6 = 256;
double last_1_var_1_22 = 2.7;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch100Filler_PR_CI
	/* 14L, 224L, 674L, 689L, 916L, 1035L) */ if (/* 6L, 207L, 208L, 675L, 690L, 908L, 1036L) */ ((/* 3L, 205L, 209L, 676L, 691L, 905L, 1037L) */ (max (/* 3L, 205L, 209L, 676L, 691L, 905L, 1037L) */ (last_1_var_1_22) , (var_1_5)))) > (last_1_var_1_22))) {
		/* 13L, 223L, 680L, 695L, 915L, 1043L) */ var_1_19 = (
			/* 12L, 222L, 683L, 698L, 914L, 1046L) */ (max (
				/* 12L, 222L, 683L, 698L, 914L, 1046L) */ (
					last_1_var_1_6
				) , (
					var_1_14
				)
			))
		);
	}


	// From: CodeObject2
	/* 279L, 110L) */ if (/* 280L, 52L, 53L) */ ((var_1_21) > (/* 282L, 51L, 55L) */ ((var_1_29) / (/* 284L, 50L, 57L) */ (max (/* 284L, 50L, 57L) */ (var_1_31) , (var_1_32)))))))) {
		/* 287L, 108L) */ if (/* 288L, 71L, 72L) */ ((/* 289L, 69L, 73L) */ (abs (/* 290L, 68L, 74L) */ (abs (var_1_21))))) <= (var_1_32))) {
			/* 293L, 86L) */ var_1_30 = (
				/* 296L, 85L) */ (abs (
					var_1_31
				))
			);
		} else {
			/* 298L, 106L) */ if (/* 299L, 91L, 92L) */ ((var_1_16) && (/* 301L, 90L, 94L) */ ((var_1_31) > (var_1_32))))) {
				/* 304L, 105L) */ var_1_30 = (
					var_1_31
				);
			}
		}
	}


	// From: Req2Batch100Filler_PR_CI
	unsigned long int stepLocal_3 = /* 974L, 77L, 85L, 439L, 475L) */ ((var_1_19) * (/* 976L, 76L, 87L, 441L, 477L) */ ((3512938537u) - (var_1_11))));
	unsigned long int stepLocal_2 = /* 967L, 110L, 118L, 451L, 487L) */ ((2u) * (/* 969L, 109L, 120L, 453L, 489L) */ ((var_1_19) * (var_1_11))));
	/* 1004L, 147L, 432L, 468L) */ if (/* 985L, 78L, 79L, 433L, 469L) */ ((/* 984L, 72L, 80L, 434L, 470L) */ ((var_1_19) ^ (/* 983L, 71L, 82L, 436L, 472L) */ ((var_1_9) - (var_1_10))))) > (stepLocal_3))) {
		/* 1003L, 145L, 444L, 480L) */ if (/* 991L, 111L, 112L, 445L, 481L) */ ((/* 990L, 105L, 113L, 446L, 482L) */ ((/* 988L, 103L, 114L, 447L, 483L) */ (max (/* 988L, 103L, 114L, 447L, 483L) */ (var_1_19) , (var_1_9)))) + (var_1_19))) == (stepLocal_2))) {
			/* 995L, 137L, 456L, 492L) */ var_1_6 = (
				var_1_13
			);
		} else {
			/* 1002L, 144L, 460L, 496L) */ var_1_6 = (
				/* 1001L, 143L, 463L, 499L) */ (max (
					/* 1001L, 143L, 463L, 499L) */ (
						/* 999L, 141L, 464L, 500L) */ (abs (
							var_1_13
						))
					) , (
						var_1_14
					)
				))
			);
		}
	}


	// From: CodeObject5
	/* 369L, 268L) */ if (/* 370L, 231L, 232L) */ ((var_1_38) <= (var_1_19))) {
		/* 373L, 262L) */ if (/* 374L, 241L, 242L) */ ((var_1_38) >= (/* 376L, 240L, 244L) */ (abs (var_1_29))))) {
			/* 378L, 254L) */ var_1_39 = (
				/* 381L, 253L) */ (abs (
					var_1_26
				))
			);
		} else {
			/* 383L, 261L) */ var_1_39 = (
				/* 386L, 260L) */ (abs (
					/* 387L, 259L) */ (min (
						/* 387L, 259L) */ (
							var_1_26
						) , (
							var_1_25
						)
					))
				))
			);
		}
	} else {
		/* 390L, 267L) */ var_1_39 = (
			var_1_25
		);
	}


	// From: Req5Batch100Filler_PR_CI
	unsigned long int stepLocal_5 = var_1_11;
	unsigned long int stepLocal_4 = var_1_19;
	/* 1066L, 258L, 758L, 771L) */ if (/* 1058L, 236L, 237L, 759L, 772L) */ ((var_1_4) > (stepLocal_5))) {
		/* 1065L, 256L, 762L, 775L) */ if (/* 1060L, 245L, 246L, 763L, 776L) */ ((var_1_4) > (stepLocal_4))) {
			/* 1064L, 255L, 766L, 779L) */ var_1_21 = (
				8
			);
		}
	}


	// From: Req1Batch100Filler_PR_CI
	unsigned long int stepLocal_1 = 8u;
	unsigned long int stepLocal_0 = /* 939L, 16L, 20L, 355L, 376L) */ ((/* 940L, 14L, 21L, 356L, 377L) */ (min (/* 940L, 14L, 21L, 356L, 377L) */ (var_1_2) , (var_1_21)))) + (var_1_21));
	/* 961L, 58L, 348L, 369L) */ if (/* 949L, 4L, 5L, 349L, 370L) */ ((stepLocal_1) < (var_1_2))) {
		/* 960L, 56L, 352L, 373L) */ if (/* 951L, 17L, 18L, 353L, 374L) */ ((-8) > (stepLocal_0))) {
			/* 955L, 35L, 360L, 381L) */ var_1_1 = (
				var_1_5
			);
		} else {
			/* 959L, 55L, 364L, 385L) */ var_1_1 = (
				256.5
			);
		}
	}


	// From: CodeObject3
	/* 309L, 155L) */ if (/* 310L, 116L, 117L) */ ((var_1_32) >= (var_1_31))) {
		/* 313L, 153L) */ if (/* 314L, 129L, 130L) */ ((/* 315L, 125L, 131L) */ ((var_1_29) > (var_1_32))) && (/* 318L, 128L, 134L) */ ((8) < (var_1_31))))) {
			/* 321L, 148L) */ var_1_34 = (
				/* 324L, 147L) */ (! (
					var_1_35
				))
			);
		} else {
			/* 326L, 152L) */ var_1_34 = (
				var_1_35
			);
		}
	}


	// From: Req3Batch100Filler_PR_CI
	/* 1014L, 187L, 581L, 605L) */ if (var_1_16) {
		/* 1016L, 181L, 583L, 607L) */ if (/* 1017L, 162L, 163L, 584L, 608L) */ ((/* 1018L, 160L, 164L, 585L, 609L) */ ((var_1_1) + (/* 1020L, 159L, 166L, 587L, 611L) */ ((var_1_5) + (var_1_1))))) < (9.25))) {
			/* 1024L, 180L, 591L, 615L) */ var_1_15 = (
				var_1_5
			);
		}
	} else {
		/* 1028L, 186L, 595L, 619L) */ var_1_15 = (
			var_1_18
		);
	}


	// From: Req6Batch100Filler_PR_CI
	/* 1071L, 302L, 810L, 833L) */ if (/* 1072L, 270L, 271L, 811L, 834L) */ (! (/* 1073L, 269L, 272L, 812L, 835L) */ ((/* 1074L, 265L, 273L, 813L, 836L) */ (abs (var_1_15))) >= (/* 1076L, 268L, 275L, 815L, 838L) */ ((var_1_23) - (var_1_24))))))) {
		/* 1079L, 292L, 818L, 841L) */ var_1_22 = (
			/* 1082L, 291L, 821L, 844L) */ ((
				var_1_25
			) + (
				/* 1084L, 290L, 823L, 846L) */ ((
					var_1_26
				) - (
					var_1_27
				))
			))
		);
	} else {
		/* 1087L, 300L, 826L, 849L) */ if (var_1_16) {
			/* 1089L, 299L, 828L, 851L) */ var_1_22 = (
				var_1_18
			);
		}
	}


	// From: CodeObject1
	/* 275L, 41L) */ var_1_28 = (
		var_1_29
	);


	// From: CodeObject4
	/* 330L, 225L) */ if (/* 331L, 163L, 164L) */ ((-2) <= (var_1_29))) {
		/* 334L, 219L) */ if (/* 335L, 172L, 173L) */ ((var_1_19) <= (var_1_29))) {
			/* 338L, 217L) */ if (var_1_16) {
				/* 340L, 187L) */ var_1_36 = (
					/* 343L, 186L) */ ((
						64
					) - (
						var_1_37
					))
				);
			} else {
				/* 346L, 215L) */ if (/* 347L, 193L, 194L) */ ((/* 348L, 191L, 195L) */ ((var_1_29) / (var_1_32))) != (var_1_19))) {
					/* 352L, 210L) */ var_1_36 = (
						/* 355L, 209L) */ ((
							/* 356L, 207L) */ (abs (
								var_1_31
							))
						) - (
							256
						))
					);
				} else {
					/* 359L, 214L) */ var_1_36 = (
						var_1_38
					);
				}
			}
		}
	} else {
		/* 363L, 224L) */ var_1_36 = (
			var_1_37
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_9 >= 2147483647);
	assume_abort_if_not(var_1_9 <= 4294967295);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 65534);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -127);
	assume_abort_if_not(var_1_29 <= 126);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -128);
	assume_abort_if_not(var_1_31 <= 127);
	assume_abort_if_not(var_1_31 != 0);
	var_1_32 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_32 >= -128);
	assume_abort_if_not(var_1_32 <= 127);
	assume_abort_if_not(var_1_32 != 0);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 1);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 32766);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 127);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
	last_1_var_1_22 = var_1_22;
}

int property(void) {
	if (/* 395L, 4L, 8L, 391L, 412L, 1095L) */ ((8u) < (var_1_2))) {
		if (/* 399L, 17L, 25L, 395L, 416L, 1099L) */ ((-8) > (/* 401L, 16L, 27L, 397L, 418L, 1101L) */ ((/* 402L, 14L, 28L, 398L, 419L, 1102L) */ (min (/* 402L, 14L, 28L, 398L, 419L, 1102L) */ (var_1_2) , (var_1_21)))) + (var_1_21))))) {
		} else {
		}
	}
	if (/* 416L, 78L, 90L, 505L, 541L, 1116L) */ ((/* 417L, 72L, 91L, 506L, 542L, 1117L) */ ((var_1_19) ^ (/* 419L, 71L, 93L, 508L, 544L, 1119L) */ ((var_1_9) - (var_1_10))))) > (/* 422L, 77L, 96L, 511L, 547L, 1122L) */ ((var_1_19) * (/* 424L, 76L, 98L, 513L, 549L, 1124L) */ ((3512938537u) - (var_1_11))))))) {
		if (/* 428L, 111L, 123L, 517L, 553L, 1128L) */ ((/* 429L, 105L, 124L, 518L, 554L, 1129L) */ ((/* 430L, 103L, 125L, 519L, 555L, 1130L) */ (max (/* 430L, 103L, 125L, 519L, 555L, 1130L) */ (var_1_19) , (var_1_9)))) + (var_1_19))) == (/* 434L, 110L, 129L, 523L, 559L, 1134L) */ ((2u) * (/* 436L, 109L, 131L, 525L, 561L, 1136L) */ ((var_1_19) * (var_1_11))))))) {
		} else {
		}
	}
	if (var_1_16) {
		if (/* 459L, 162L, 170L, 632L, 656L, 1159L) */ ((/* 460L, 160L, 171L, 633L, 657L, 1160L) */ ((var_1_1) + (/* 462L, 159L, 173L, 635L, 659L, 1162L) */ ((var_1_5) + (var_1_1))))) < (9.25))) {
		}
	} else {
	}
	if (/* 478L, 207L, 213L, 705L, 720L, 926L, 1178L, 24L) */ ((/* 479L, 205L, 214L, 706L, 721L, 923L, 1179L, 21L) */ (max (/* 479L, 205L, 214L, 706L, 721L, 923L, 1179L, 21L) */ (last_1_var_1_22) , (var_1_5)))) > (last_1_var_1_22))) {
	}
	if (/* 494L, 236L, 240L, 785L, 798L, 1194L) */ ((var_1_4) > (var_1_11))) {
		if (/* 498L, 245L, 249L, 789L, 802L, 1198L) */ ((var_1_4) > (var_1_19))) {
		}
	}
	if (/* 507L, 270L, 278L, 857L, 880L, 1207L) */ (! (/* 508L, 269L, 279L, 858L, 881L, 1208L) */ ((/* 509L, 265L, 280L, 859L, 882L, 1209L) */ (abs (var_1_15))) >= (/* 511L, 268L, 282L, 861L, 884L, 1211L) */ ((var_1_23) - (var_1_24))))))) {
	} else {
		if (var_1_16) {
		}
	}
	return /* 533L) */ ((
	/* 532L) */ ((
		/* 531L) */ ((
			/* 530L) */ ((
				/* 529L) */ ((
					/* 394L, 59L, 390L, 411L, 1094L) */ ((
						/* 395L, 4L, 8L, 391L, 412L, 1095L) */ ((
							8u
						) < (
							var_1_2
						))
					) ? (
						/* 398L, 57L, 394L, 415L, 1098L) */ ((
							/* 399L, 17L, 25L, 395L, 416L, 1099L) */ ((
								-8
							) > (
								/* 401L, 16L, 27L, 397L, 418L, 1101L) */ ((
									/* 402L, 14L, 28L, 398L, 419L, 1102L) */ (min (
										/* 402L, 14L, 28L, 398L, 419L, 1102L) */ (
											var_1_2
										) , (
											var_1_21
										)
									))
								) + (
									var_1_21
								))
							))
						) ? (
							/* 406L, 35L, 402L, 423L, 1106L) */ ((
								var_1_1
							) == (
								/* 406L, 35L, 402L, 423L, 1106L) */ ((double) (
									var_1_5
								))
							))
						) : (
							/* 410L, 55L, 406L, 427L, 1110L) */ ((
								var_1_1
							) == (
								/* 410L, 55L, 406L, 427L, 1110L) */ ((double) (
									256.5
								))
							))
						))
					) : (
						1
					))
				) && (
					/* 415L, 148L, 504L, 540L, 1115L) */ ((
						/* 416L, 78L, 90L, 505L, 541L, 1116L) */ ((
							/* 417L, 72L, 91L, 506L, 542L, 1117L) */ ((
								var_1_19
							) ^ (
								/* 419L, 71L, 93L, 508L, 544L, 1119L) */ ((
									var_1_9
								) - (
									var_1_10
								))
							))
						) > (
							/* 422L, 77L, 96L, 511L, 547L, 1122L) */ ((
								var_1_19
							) * (
								/* 424L, 76L, 98L, 513L, 549L, 1124L) */ ((
									3512938537u
								) - (
									var_1_11
								))
							))
						))
					) ? (
						/* 427L, 146L, 516L, 552L, 1127L) */ ((
							/* 428L, 111L, 123L, 517L, 553L, 1128L) */ ((
								/* 429L, 105L, 124L, 518L, 554L, 1129L) */ ((
									/* 430L, 103L, 125L, 519L, 555L, 1130L) */ (max (
										/* 430L, 103L, 125L, 519L, 555L, 1130L) */ (
											var_1_19
										) , (
											var_1_9
										)
									))
								) + (
									var_1_19
								))
							) == (
								/* 434L, 110L, 129L, 523L, 559L, 1134L) */ ((
									2u
								) * (
									/* 436L, 109L, 131L, 525L, 561L, 1136L) */ ((
										var_1_19
									) * (
										var_1_11
									))
								))
							))
						) ? (
							/* 439L, 137L, 528L, 564L, 1139L) */ ((
								var_1_6
							) == (
								/* 439L, 137L, 528L, 564L, 1139L) */ ((unsigned short int) (
									var_1_13
								))
							))
						) : (
							/* 443L, 144L, 532L, 568L, 1143L) */ ((
								var_1_6
							) == (
								/* 443L, 144L, 532L, 568L, 1143L) */ ((unsigned short int) (
									/* 446L, 143L, 535L, 571L, 1146L) */ (max (
										/* 446L, 143L, 535L, 571L, 1146L) */ (
											/* 447L, 141L, 536L, 572L, 1147L) */ (abs (
												var_1_13
											))
										) , (
											var_1_14
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
				/* 456L, 188L, 629L, 653L, 1156L) */ ((
					var_1_16
				) ? (
					/* 458L, 182L, 631L, 655L, 1158L) */ ((
						/* 459L, 162L, 170L, 632L, 656L, 1159L) */ ((
							/* 460L, 160L, 171L, 633L, 657L, 1160L) */ ((
								var_1_1
							) + (
								/* 462L, 159L, 173L, 635L, 659L, 1162L) */ ((
									var_1_5
								) + (
									var_1_1
								))
							))
						) < (
							9.25
						))
					) ? (
						/* 466L, 180L, 639L, 663L, 1166L) */ ((
							var_1_15
						) == (
							/* 466L, 180L, 639L, 663L, 1166L) */ ((float) (
								var_1_5
							))
						))
					) : (
						1
					))
				) : (
					/* 470L, 186L, 643L, 667L, 1170L) */ ((
						var_1_15
					) == (
						/* 470L, 186L, 643L, 667L, 1170L) */ ((float) (
							var_1_18
						))
					))
				))
			))
		) && (
			/* 477L, 225L, 704L, 719L, 934L, 1177L, 32L) */ ((
				/* 478L, 207L, 213L, 705L, 720L, 926L, 1178L, 24L) */ ((
					/* 479L, 205L, 214L, 706L, 721L, 923L, 1179L, 21L) */ (max (
						/* 479L, 205L, 214L, 706L, 721L, 923L, 1179L, 21L) */ (
							last_1_var_1_22
						) , (
							var_1_5
						)
					))
				) > (
					last_1_var_1_22
				))
			) ? (
				/* 485L, 223L, 710L, 725L, 933L, 1185L, 31L) */ ((
					var_1_19
				) == (
					/* 485L, 223L, 710L, 725L, 933L, 1185L, 31L) */ ((unsigned long int) (
						/* 488L, 222L, 713L, 728L, 932L, 1188L, 30L) */ (max (
							/* 488L, 222L, 713L, 728L, 932L, 1188L, 30L) */ (
								last_1_var_1_6
							) , (
								var_1_14
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 493L, 259L, 784L, 797L, 1193L) */ ((
			/* 494L, 236L, 240L, 785L, 798L, 1194L) */ ((
				var_1_4
			) > (
				var_1_11
			))
		) ? (
			/* 497L, 257L, 788L, 801L, 1197L) */ ((
				/* 498L, 245L, 249L, 789L, 802L, 1198L) */ ((
					var_1_4
				) > (
					var_1_19
				))
			) ? (
				/* 501L, 255L, 792L, 805L, 1201L) */ ((
					var_1_21
				) == (
					/* 501L, 255L, 792L, 805L, 1201L) */ ((signed long int) (
						8
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
	/* 506L, 303L, 856L, 879L, 1206L) */ ((
		/* 507L, 270L, 278L, 857L, 880L, 1207L) */ (! (
			/* 508L, 269L, 279L, 858L, 881L, 1208L) */ ((
				/* 509L, 265L, 280L, 859L, 882L, 1209L) */ (abs (
					var_1_15
				))
			) >= (
				/* 511L, 268L, 282L, 861L, 884L, 1211L) */ ((
					var_1_23
				) - (
					var_1_24
				))
			))
		))
	) ? (
		/* 514L, 292L, 864L, 887L, 1214L) */ ((
			var_1_22
		) == (
			/* 514L, 292L, 864L, 887L, 1214L) */ ((double) (
				/* 517L, 291L, 867L, 890L, 1217L) */ ((
					var_1_25
				) + (
					/* 519L, 290L, 869L, 892L, 1219L) */ ((
						var_1_26
					) - (
						var_1_27
					))
				))
			))
		))
	) : (
		/* 522L, 301L, 872L, 895L, 1222L) */ ((
			var_1_16
		) ? (
			/* 524L, 299L, 874L, 897L, 1224L) */ ((
				var_1_22
			) == (
				/* 524L, 299L, 874L, 897L, 1224L) */ ((double) (
					var_1_18
				))
			))
		) : (
			1
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
