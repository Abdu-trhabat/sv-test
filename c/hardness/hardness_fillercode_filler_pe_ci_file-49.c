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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch49Filler_PE_CI.c", 13, "reach_error"); }
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
unsigned long int var_1_3 = 3171453299;
unsigned long int var_1_4 = 2038274679;
unsigned long int var_1_5 = 1375699353;
unsigned long int var_1_6 = 10;
unsigned long int var_1_7 = 16;
unsigned short int var_1_8 = 16;
unsigned short int var_1_9 = 128;
unsigned short int var_1_10 = 1;
unsigned short int var_1_11 = 100;
unsigned char var_1_12 = 1;
unsigned long int var_1_13 = 2;
unsigned char var_1_14 = 1;
double var_1_15 = 64.45;
float var_1_16 = 31.15;
float var_1_17 = 16.4;
double var_1_18 = 100.625;
double var_1_19 = 128.1;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 100;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 16;
float var_1_26 = 1000000000000000.4;
unsigned short int var_1_27 = 32;
unsigned char var_1_28 = 5;
unsigned char var_1_29 = 8;
unsigned short int var_1_30 = 4;
signed long int var_1_32 = -1;
signed char var_1_33 = -4;
double var_1_37 = 49.375;
double var_1_41 = 256.2;
double var_1_42 = 127.25;
signed short int var_1_43 = -256;
double var_1_44 = 128.75;

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_1 = 10;
unsigned char last_1_var_1_12 = 1;
unsigned char last_1_var_1_22 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch49Filler_PE_CI
	/* 20L, 85L, 389L, 411L, 867L, 929L) */ if (/* 2L, 44L, 45L, 390L, 412L, 849L, 930L) */ (! (last_1_var_1_22))) {
		/* 15L, 79L, 392L, 414L, 862L, 933L) */ if (/* 10L, 60L, 61L, 393L, 415L, 857L, 934L) */ ((/* 8L, 58L, 62L, 394L, 416L, 855L, 935L) */ ((var_1_7) * (/* 7L, 57L, 64L, 396L, 418L, 854L, 937L) */ (min (/* 7L, 57L, 64L, 396L, 418L, 854L, 937L) */ (var_1_5) , (last_1_var_1_1)))))) >= (var_1_4))) {
			/* 14L, 78L, 400L, 422L, 861L, 942L) */ var_1_12 = (
				var_1_14
			);
		}
	} else {
		/* 19L, 84L, 404L, 426L, 866L, 946L) */ var_1_12 = (
			0
		);
	}


	// From: Req1Batch49Filler_PE_CI
	/* 895L, 19L, 263L, 280L, 827L) */ if (last_1_var_1_12) {
		/* 898L, 18L, 265L, 282L, 826L) */ var_1_1 = (
			/* 901L, 17L, 268L, 285L, 825L) */ ((
				/* 902L, 11L, 269L, 286L, 819L) */ (max (
					/* 902L, 11L, 269L, 286L, 819L) */ (
						var_1_3
					) , (
						/* 904L, 10L, 271L, 288L, 818L) */ ((
							var_1_4
						) + (
							var_1_5
						))
					)
				))
			) - (
				/* 907L, 16L, 274L, 291L, 824L) */ ((
					/* 908L, 14L, 275L, 292L, 822L) */ (max (
						/* 908L, 14L, 275L, 292L, 822L) */ (
							var_1_6
						) , (
							var_1_7
						)
					))
				) + (
					256u
				))
			))
		);
	}


	// From: Req6Batch49Filler_PE_CI
	/* 993L, 257L, 640L, 683L) */ if (/* 994L, 186L, 187L, 641L, 684L) */ ((/* 995L, 182L, 188L, 642L, 685L) */ ((-2) / (var_1_13))) >= (/* 998L, 185L, 191L, 645L, 688L) */ ((var_1_11) & (var_1_4))))) {
		/* 1001L, 251L, 648L, 691L) */ if (/* 1002L, 205L, 206L, 649L, 692L) */ ((var_1_3) >= (/* 1004L, 204L, 208L, 651L, 694L) */ ((var_1_21) + (var_1_6))))) {
			/* 1007L, 245L, 654L, 697L) */ if (/* 1008L, 219L, 220L, 655L, 698L) */ ((/* 1009L, 217L, 221L, 656L, 699L) */ (~ (var_1_10))) > (var_1_1))) {
				/* 1012L, 239L, 659L, 702L) */ if (var_1_12) {
					/* 1014L, 234L, 661L, 704L) */ var_1_22 = (
						var_1_23
					);
				} else {
					/* 1018L, 238L, 665L, 708L) */ var_1_22 = (
						var_1_14
					);
				}
			} else {
				/* 1022L, 244L, 669L, 712L) */ var_1_22 = (
					var_1_14
				);
			}
		} else {
			/* 1026L, 250L, 673L, 716L) */ var_1_22 = (
				var_1_14
			);
		}
	} else {
		/* 1030L, 256L, 677L, 720L) */ var_1_22 = (
			var_1_14
		);
	}


	// From: Req2Batch49Filler_PE_CI
	/* 914L, 36L, 332L, 346L) */ var_1_8 = (
		/* 917L, 35L, 335L, 349L) */ (max (
			/* 917L, 35L, 335L, 349L) */ (
				25
			) , (
				/* 919L, 34L, 337L, 351L) */ ((
					/* 920L, 30L, 338L, 352L) */ (min (
						/* 920L, 30L, 338L, 352L) */ (
							var_1_9
						) , (
							var_1_10
						)
					))
				) + (
					/* 923L, 33L, 341L, 355L) */ ((
						100
					) + (
						var_1_11
					))
				))
			)
		))
	);


	// From: Req4Batch49Filler_PE_CI
	/* 951L, 122L, 475L, 490L) */ if (/* 952L, 101L, 102L, 476L, 491L) */ ((/* 953L, 99L, 103L, 477L, 492L) */ (max (/* 953L, 99L, 103L, 477L, 492L) */ (/* 954L, 96L, 104L, 478L, 493L) */ (- (9.5f))) , (/* 956L, 98L, 106L, 480L, 495L) */ (- (var_1_16)))))) < (var_1_17))) {
		/* 959L, 121L, 483L, 498L) */ var_1_15 = (
			/* 962L, 120L, 486L, 501L) */ (min (
				/* 962L, 120L, 486L, 501L) */ (
					var_1_18
				) , (
					var_1_19
				)
			))
		);
	}


	// From: Req5Batch49Filler_PE_CI
	/* 971L, 164L, 540L, 566L) */ if (/* 972L, 130L, 131L, 541L, 567L) */ ((var_1_14) && (var_1_12))) {
		/* 975L, 162L, 544L, 570L) */ if (/* 976L, 141L, 142L, 545L, 571L) */ ((var_1_4) > (/* 978L, 140L, 144L, 547L, 573L) */ ((256u) * (var_1_11))))) {
			/* 981L, 157L, 550L, 576L) */ var_1_20 = (
				/* 984L, 156L, 553L, 579L) */ (min (
					/* 984L, 156L, 553L, 579L) */ (
						var_1_13
					) , (
						var_1_21
					)
				))
			);
		} else {
			/* 987L, 161L, 556L, 582L) */ var_1_20 = (
				var_1_13
			);
		}
	}


	// From: CodeObject1
	/* 288L, 53L) */ var_1_24 = (
		var_1_21
	);


	// From: CodeObject2
	/* 293L, 61L) */ var_1_26 = (
		64.5f
	);


	// From: CodeObject3
	/* 314L, 96L) */ if (/* 315L, 72L, 73L) */ ((/* 316L, 70L, 74L) */ ((var_1_21) % (/* 318L, 69L, 76L) */ (min (/* 318L, 69L, 76L) */ (var_1_28) , (var_1_29)))))) < (var_1_4))) {
		/* 322L, 91L) */ var_1_27 = (
			/* 325L, 90L) */ (abs (
				var_1_29
			))
		);
	} else {
		/* 327L, 95L) */ var_1_27 = (
			var_1_28
		);
	}


	// From: CodeObject4
	/* 331L, 135L) */ if (/* 332L, 105L, 106L) */ ((/* 333L, 103L, 107L) */ ((var_1_19) <= (/* 335L, 102L, 109L) */ (- (128.5f))))) || (var_1_14))) {
		/* 338L, 121L) */ var_1_30 = (
			var_1_13
		);
	} else {
		/* 342L, 133L) */ if (var_1_14) {
			/* 344L, 128L) */ var_1_30 = (
				var_1_13
			);
		} else {
			/* 348L, 132L) */ var_1_30 = (
				2
			);
		}
	}


	// From: CodeObject5
	/* 372L, 162L) */ if (/* 373L, 141L, 142L) */ ((var_1_28) >= (var_1_21))) {
		/* 376L, 155L) */ var_1_32 = (
			/* 379L, 154L) */ ((
				2
			) - (
				/* 381L, 153L) */ (max (
					/* 381L, 153L) */ (
						var_1_4
					) , (
						var_1_28
					)
				))
			))
		);
	} else {
		/* 384L, 161L) */ var_1_32 = (
			/* 387L, 160L) */ (min (
				/* 387L, 160L) */ (
					var_1_21
				) , (
					var_1_4
				)
			))
		);
	}


	// From: CodeObject6
	/* 390L, 198L) */ if (var_1_23) {
		/* 392L, 175L) */ var_1_33 = (
			/* 395L, 174L) */ (abs (
				var_1_13
			))
		);
	} else {
		/* 397L, 196L) */ if (/* 398L, 180L, 181L) */ ((/* 399L, 178L, 182L) */ (max (/* 399L, 178L, 182L) */ (var_1_19) , (var_1_18)))) > (var_1_18))) {
			/* 403L, 195L) */ var_1_33 = (
				/* 406L, 194L) */ (abs (
					var_1_13
				))
			);
		}
	}


	// From: CodeObject7
	/* 445L, 269L) */ if (/* 446L, 204L, 205L) */ ((var_1_5) <= (var_1_10))) {
		/* 449L, 267L) */ if (/* 450L, 217L, 218L) */ ((/* 451L, 215L, 219L) */ ((var_1_19) + (/* 453L, 214L, 221L) */ ((var_1_18) + (var_1_16))))) < (var_1_19))) {
			/* 457L, 261L) */ if (/* 458L, 234L, 235L) */ ((var_1_14) || (var_1_22))) {
				/* 461L, 259L) */ if (var_1_22) {
					/* 463L, 248L) */ var_1_37 = (
						/* 466L, 247L) */ (abs (
							var_1_18
						))
					);
				} else {
					/* 468L, 258L) */ var_1_37 = (
						/* 471L, 257L) */ ((
							9999.5
						) - (
							/* 473L, 256L) */ ((
								/* 474L, 254L) */ ((
									9.042755488514645E18
								) - (
									var_1_41
								))
							) - (
								var_1_42
							))
						))
					);
				}
			}
		} else {
			/* 478L, 266L) */ var_1_37 = (
				var_1_41
			);
		}
	}


	// From: CodeObject8
	/* 483L, 276L) */ var_1_43 = (
		var_1_3
	);


	// From: CodeObject9
	/* 488L, 284L) */ var_1_44 = (
		var_1_19
	);
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 2147483647);
	assume_abort_if_not(var_1_3 <= 4294967294);
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 1073741823);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 1073741824);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1073741824);
	var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1073741824);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32767);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32767);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16383);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 15);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 1);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_28 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 255);
	assume_abort_if_not(var_1_28 != 0);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 255);
	assume_abort_if_not(var_1_29 != 0);
	var_1_41 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_22 = var_1_22;
}

int property(void) {
	if (last_1_var_1_12) {
	}
	if (/* 527L, 44L, 47L, 434L, 456L, 873L, 1070L, 26L) */ (! (last_1_var_1_22))) {
		if (/* 531L, 60L, 68L, 437L, 459L, 881L, 1074L, 34L) */ ((/* 532L, 58L, 69L, 438L, 460L, 879L, 1075L, 32L) */ ((var_1_7) * (/* 534L, 57L, 71L, 440L, 462L, 878L, 1077L, 31L) */ (min (/* 534L, 57L, 71L, 440L, 462L, 878L, 1077L, 31L) */ (var_1_5) , (last_1_var_1_1)))))) >= (var_1_4))) {
		}
	} else {
	}
	if (/* 549L, 101L, 109L, 506L, 521L, 1092L) */ ((/* 550L, 99L, 110L, 507L, 522L, 1093L) */ (max (/* 550L, 99L, 110L, 507L, 522L, 1093L) */ (/* 551L, 96L, 111L, 508L, 523L, 1094L) */ (- (9.5f))) , (/* 553L, 98L, 113L, 510L, 525L, 1096L) */ (- (var_1_16)))))) < (var_1_17))) {
	}
	if (/* 569L, 130L, 134L, 593L, 619L, 1112L) */ ((var_1_14) && (var_1_12))) {
		if (/* 573L, 141L, 147L, 597L, 623L, 1116L) */ ((var_1_4) > (/* 575L, 140L, 149L, 599L, 625L, 1118L) */ ((256u) * (var_1_11))))) {
		} else {
		}
	}
	if (/* 591L, 186L, 194L, 727L, 770L, 1134L) */ ((/* 592L, 182L, 195L, 728L, 771L, 1135L) */ ((-2) / (var_1_13))) >= (/* 595L, 185L, 198L, 731L, 774L, 1138L) */ ((var_1_11) & (var_1_4))))) {
		if (/* 599L, 205L, 211L, 735L, 778L, 1142L) */ ((var_1_3) >= (/* 601L, 204L, 213L, 737L, 780L, 1144L) */ ((var_1_21) + (var_1_6))))) {
			if (/* 605L, 219L, 224L, 741L, 784L, 1148L) */ ((/* 606L, 217L, 225L, 742L, 785L, 1149L) */ (~ (var_1_10))) > (var_1_1))) {
				if (var_1_12) {
				} else {
				}
			} else {
			}
		} else {
		}
	} else {
	}
	return /* 636L) */ ((
	/* 635L) */ ((
		/* 634L) */ ((
			/* 633L) */ ((
				/* 632L) */ ((
					/* 492L, 20L, 297L, 314L, 845L, 1035L) */ ((
						last_1_var_1_12
					) ? (
						/* 495L, 18L, 299L, 316L, 844L, 1038L) */ ((
							var_1_1
						) == (
							/* 495L, 18L, 299L, 316L, 844L, 1038L) */ ((unsigned long int) (
								/* 498L, 17L, 302L, 319L, 843L, 1041L) */ ((
									/* 499L, 11L, 303L, 320L, 837L, 1042L) */ (max (
										/* 499L, 11L, 303L, 320L, 837L, 1042L) */ (
											var_1_3
										) , (
											/* 501L, 10L, 305L, 322L, 836L, 1044L) */ ((
												var_1_4
											) + (
												var_1_5
											))
										)
									))
								) - (
									/* 504L, 16L, 308L, 325L, 842L, 1047L) */ ((
										/* 505L, 14L, 309L, 326L, 840L, 1048L) */ (max (
											/* 505L, 14L, 309L, 326L, 840L, 1048L) */ (
												var_1_6
											) , (
												var_1_7
											)
										))
									) + (
										256u
									))
								))
							))
						))
					) : (
						1
					))
				) && (
					/* 511L, 36L, 360L, 374L, 1054L) */ ((
						var_1_8
					) == (
						/* 511L, 36L, 360L, 374L, 1054L) */ ((unsigned short int) (
							/* 514L, 35L, 363L, 377L, 1057L) */ (max (
								/* 514L, 35L, 363L, 377L, 1057L) */ (
									25
								) , (
									/* 516L, 34L, 365L, 379L, 1059L) */ ((
										/* 517L, 30L, 366L, 380L, 1060L) */ (min (
											/* 517L, 30L, 366L, 380L, 1060L) */ (
												var_1_9
											) , (
												var_1_10
											)
										))
									) + (
										/* 520L, 33L, 369L, 383L, 1063L) */ ((
											100
										) + (
											var_1_11
										))
									))
								)
							))
						))
					))
				))
			) && (
				/* 526L, 86L, 433L, 455L, 891L, 1069L, 44L) */ ((
					/* 527L, 44L, 47L, 434L, 456L, 873L, 1070L, 26L) */ (! (
						last_1_var_1_22
					))
				) ? (
					/* 530L, 80L, 436L, 458L, 886L, 1073L, 39L) */ ((
						/* 531L, 60L, 68L, 437L, 459L, 881L, 1074L, 34L) */ ((
							/* 532L, 58L, 69L, 438L, 460L, 879L, 1075L, 32L) */ ((
								var_1_7
							) * (
								/* 534L, 57L, 71L, 440L, 462L, 878L, 1077L, 31L) */ (min (
									/* 534L, 57L, 71L, 440L, 462L, 878L, 1077L, 31L) */ (
										var_1_5
									) , (
										last_1_var_1_1
									)
								))
							))
						) >= (
							var_1_4
						))
					) ? (
						/* 539L, 78L, 444L, 466L, 885L, 1082L, 38L) */ ((
							var_1_12
						) == (
							/* 539L, 78L, 444L, 466L, 885L, 1082L, 38L) */ ((unsigned char) (
								var_1_14
							))
						))
					) : (
						1
					))
				) : (
					/* 543L, 84L, 448L, 470L, 890L, 1086L, 43L) */ ((
						var_1_12
					) == (
						/* 543L, 84L, 448L, 470L, 890L, 1086L, 43L) */ ((unsigned char) (
							0
						))
					))
				))
			))
		) && (
			/* 548L, 123L, 505L, 520L, 1091L) */ ((
				/* 549L, 101L, 109L, 506L, 521L, 1092L) */ ((
					/* 550L, 99L, 110L, 507L, 522L, 1093L) */ (max (
						/* 550L, 99L, 110L, 507L, 522L, 1093L) */ (
							/* 551L, 96L, 111L, 508L, 523L, 1094L) */ (- (
								9.5f
							))
						) , (
							/* 553L, 98L, 113L, 510L, 525L, 1096L) */ (- (
								var_1_16
							))
						)
					))
				) < (
					var_1_17
				))
			) ? (
				/* 556L, 121L, 513L, 528L, 1099L) */ ((
					var_1_15
				) == (
					/* 556L, 121L, 513L, 528L, 1099L) */ ((double) (
						/* 559L, 120L, 516L, 531L, 1102L) */ (min (
							/* 559L, 120L, 516L, 531L, 1102L) */ (
								var_1_18
							) , (
								var_1_19
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 568L, 165L, 592L, 618L, 1111L) */ ((
			/* 569L, 130L, 134L, 593L, 619L, 1112L) */ ((
				var_1_14
			) && (
				var_1_12
			))
		) ? (
			/* 572L, 163L, 596L, 622L, 1115L) */ ((
				/* 573L, 141L, 147L, 597L, 623L, 1116L) */ ((
					var_1_4
				) > (
					/* 575L, 140L, 149L, 599L, 625L, 1118L) */ ((
						256u
					) * (
						var_1_11
					))
				))
			) ? (
				/* 578L, 157L, 602L, 628L, 1121L) */ ((
					var_1_20
				) == (
					/* 578L, 157L, 602L, 628L, 1121L) */ ((unsigned char) (
						/* 581L, 156L, 605L, 631L, 1124L) */ (min (
							/* 581L, 156L, 605L, 631L, 1124L) */ (
								var_1_13
							) , (
								var_1_21
							)
						))
					))
				))
			) : (
				/* 584L, 161L, 608L, 634L, 1127L) */ ((
					var_1_20
				) == (
					/* 584L, 161L, 608L, 634L, 1127L) */ ((unsigned char) (
						var_1_13
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 590L, 258L, 726L, 769L, 1133L) */ ((
		/* 591L, 186L, 194L, 727L, 770L, 1134L) */ ((
			/* 592L, 182L, 195L, 728L, 771L, 1135L) */ ((
				-2
			) / (
				var_1_13
			))
		) >= (
			/* 595L, 185L, 198L, 731L, 774L, 1138L) */ ((
				var_1_11
			) & (
				var_1_4
			))
		))
	) ? (
		/* 598L, 252L, 734L, 777L, 1141L) */ ((
			/* 599L, 205L, 211L, 735L, 778L, 1142L) */ ((
				var_1_3
			) >= (
				/* 601L, 204L, 213L, 737L, 780L, 1144L) */ ((
					var_1_21
				) + (
					var_1_6
				))
			))
		) ? (
			/* 604L, 246L, 740L, 783L, 1147L) */ ((
				/* 605L, 219L, 224L, 741L, 784L, 1148L) */ ((
					/* 606L, 217L, 225L, 742L, 785L, 1149L) */ (~ (
						var_1_10
					))
				) > (
					var_1_1
				))
			) ? (
				/* 609L, 240L, 745L, 788L, 1152L) */ ((
					var_1_12
				) ? (
					/* 611L, 234L, 747L, 790L, 1154L) */ ((
						var_1_22
					) == (
						/* 611L, 234L, 747L, 790L, 1154L) */ ((unsigned char) (
							var_1_23
						))
					))
				) : (
					/* 615L, 238L, 751L, 794L, 1158L) */ ((
						var_1_22
					) == (
						/* 615L, 238L, 751L, 794L, 1158L) */ ((unsigned char) (
							var_1_14
						))
					))
				))
			) : (
				/* 619L, 244L, 755L, 798L, 1162L) */ ((
					var_1_22
				) == (
					/* 619L, 244L, 755L, 798L, 1162L) */ ((unsigned char) (
						var_1_14
					))
				))
			))
		) : (
			/* 623L, 250L, 759L, 802L, 1166L) */ ((
				var_1_22
			) == (
				/* 623L, 250L, 759L, 802L, 1166L) */ ((unsigned char) (
					var_1_14
				))
			))
		))
	) : (
		/* 627L, 256L, 763L, 806L, 1170L) */ ((
			var_1_22
		) == (
			/* 627L, 256L, 763L, 806L, 1170L) */ ((unsigned char) (
				var_1_14
			))
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
