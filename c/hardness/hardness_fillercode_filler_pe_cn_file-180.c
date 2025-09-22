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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch180Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 50;
unsigned short int var_1_5 = 8;
double var_1_6 = -0.75;
unsigned char var_1_7 = 1;
double var_1_8 = 32.8;
double var_1_9 = 128.8;
unsigned short int var_1_10 = 64;
unsigned char var_1_11 = 1;
unsigned short int var_1_12 = 32;
unsigned short int var_1_13 = 8;
signed long int var_1_14 = 128;
signed long int var_1_15 = -1;
signed char var_1_16 = 16;
signed char var_1_17 = 1;
signed long int var_1_18 = 100;
float var_1_19 = 3.6;
signed long int var_1_20 = 32;
float var_1_22 = 15.8;
float var_1_23 = 64.625;
signed short int var_1_24 = 8;
signed char var_1_25 = -1;
signed char var_1_26 = -32;
signed long int var_1_27 = -4;
double var_1_28 = 4.1;
double var_1_29 = 63.2;
unsigned short int var_1_30 = 16;
unsigned short int var_1_31 = 5;
unsigned long int var_1_32 = 100;
unsigned long int var_1_33 = 3452321122;
unsigned char var_1_34 = 0;
unsigned short int var_1_35 = 36671;
unsigned short int var_1_36 = 128;
unsigned char var_1_37 = 4;
unsigned char var_1_38 = 0;
unsigned long int var_1_39 = 100000000;
signed long int var_1_40 = 8;
signed short int var_1_41 = -2;
signed short int var_1_42 = 128;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_10 = 64;
signed long int last_1_var_1_18 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch180Filler_PE_CN
	/* 21L, 33L, 275L, 295L, 901L, 929L) */ if (/* 9L, 8L, 9L, 276L, 296L, 889L, 930L) */ ((last_1_var_1_10) != (/* 8L, 7L, 11L, 278L, 298L, 888L, 933L) */ ((last_1_var_1_10) & (/* 7L, 6L, 13L, 280L, 300L, 887L, 936L) */ ((last_1_var_1_18) / (var_1_5))))))) {
		/* 16L, 28L, 283L, 303L, 896L, 940L) */ var_1_1 = (
			/* 15L, 27L, 286L, 306L, 895L, 943L) */ ((
				var_1_5
			) + (
				last_1_var_1_10
			))
		);
	} else {
		/* 20L, 32L, 289L, 309L, 900L, 947L) */ var_1_1 = (
			var_1_5
		);
	}


	// From: Req4Batch180Filler_PE_CN
	/* 1008L, 143L, 597L, 607L) */ var_1_14 = (
		/* 1011L, 142L, 600L, 610L) */ (min (
			/* 1011L, 142L, 600L, 610L) */ (
				/* 1012L, 140L, 601L, 611L) */ ((
					var_1_1
				) - (
					var_1_12
				))
			) , (
				var_1_15
			)
		))
	);


	// From: Req3Batch180Filler_PE_CN
	/* 986L, 126L, 506L, 529L) */ if (var_1_7) {
		/* 988L, 124L, 508L, 531L) */ if (/* 989L, 98L, 99L, 509L, 532L) */ (! (var_1_11))) {
			/* 991L, 108L, 511L, 534L) */ var_1_10 = (
				/* 994L, 107L, 514L, 537L) */ ((
					var_1_12
				) + (
					var_1_13
				))
			);
		} else {
			/* 997L, 122L, 517L, 540L) */ if (/* 998L, 111L, 112L, 518L, 541L) */ ((var_1_5) > (last_1_var_1_10))) {
				/* 1002L, 121L, 522L, 545L) */ var_1_10 = (
					var_1_13
				);
			}
		}
	}


	// From: Req7Batch180Filler_PE_CN
	/* 1055L, 212L, 750L, 759L) */ var_1_19 = (
		/* 1058L, 211L, 753L, 762L) */ (min (
			/* 1058L, 211L, 753L, 762L) */ (
				var_1_8
			) , (
				var_1_9
			)
		))
	);


	// From: Req6Batch180Filler_PE_CN
	signed long int stepLocal_3 = 5;
	/* 1049L, 203L, 696L, 709L) */ if (/* 1040L, 188L, 189L, 697L, 710L) */ ((stepLocal_3) >= (var_1_14))) {
		/* 1048L, 202L, 700L, 713L) */ var_1_18 = (
			/* 1047L, 201L, 703L, 716L) */ ((
				var_1_12
			) - (
				/* 1046L, 200L, 705L, 718L) */ ((
					var_1_10
				) + (
					var_1_5
				))
			))
		);
	}


	// From: Req5Batch180Filler_PE_CN
	signed long int stepLocal_2 = var_1_18;
	/* 1032L, 180L, 636L, 651L) */ if (/* 1025L, 156L, 157L, 637L, 652L) */ ((stepLocal_2) > (/* 1024L, 155L, 159L, 639L, 654L) */ ((var_1_12) + (/* 1023L, 154L, 161L, 641L, 656L) */ ((var_1_1) / (var_1_5))))))) {
		/* 1031L, 178L, 644L, 659L) */ if (var_1_7) {
			/* 1030L, 177L, 646L, 661L) */ var_1_16 = (
				var_1_17
			);
		}
	}


	// From: Req8Batch180Filler_PE_CN
	unsigned long int stepLocal_5 = /* 1068L, 247L, 251L, 797L, 821L) */ ((var_1_15) * (/* 1070L, 246L, 253L, 799L, 823L) */ ((var_1_1) | (var_1_14))));
	unsigned long int stepLocal_4 = /* 1063L, 226L, 230L, 787L, 811L) */ ((var_1_1) * (var_1_14));
	/* 1088L, 270L, 784L, 808L) */ if (/* 1075L, 227L, 228L, 785L, 809L) */ ((var_1_17) > (stepLocal_4))) {
		/* 1080L, 242L, 790L, 814L) */ var_1_20 = (
			/* 1079L, 241L, 793L, 817L) */ (abs (
				var_1_14
			))
		);
	} else {
		/* 1087L, 268L, 795L, 819L) */ if (/* 1082L, 249L, 250L, 796L, 820L) */ ((stepLocal_5) != (var_1_18))) {
			/* 1086L, 267L, 803L, 827L) */ var_1_20 = (
				-32
			);
		}
	}


	// From: Req2Batch180Filler_PE_CN
	signed long int stepLocal_1 = var_1_20;
	unsigned short int stepLocal_0 = var_1_5;
	/* 979L, 84L, 404L, 429L) */ if (/* 959L, 43L, 44L, 405L, 430L) */ ((stepLocal_1) >= (var_1_1))) {
		/* 969L, 61L, 408L, 433L) */ if (var_1_7) {
			/* 968L, 60L, 410L, 435L) */ var_1_6 = (
				/* 967L, 59L, 413L, 438L) */ (max (
					/* 967L, 59L, 413L, 438L) */ (
						var_1_8
					) , (
						/* 966L, 58L, 415L, 440L) */ ((
							4.75
						) + (
							var_1_9
						))
					)
				))
			);
		}
	} else {
		/* 978L, 82L, 418L, 443L) */ if (/* 973L, 67L, 68L, 419L, 444L) */ ((/* 972L, 65L, 69L, 420L, 445L) */ (min (/* 972L, 65L, 69L, 420L, 445L) */ (var_1_1) , (var_1_14)))) >= (stepLocal_0))) {
			/* 977L, 81L, 424L, 449L) */ var_1_6 = (
				var_1_9
			);
		}
	}


	// From: CodeObject1
	/* 53L) */ var_1_22 = (
		var_1_23
	);


	// From: CodeObject2
	/* 93L) */ if (/* 61L, 60L) */ ((var_1_23) > (var_1_22))) {
		/* 91L) */ if (/* 72L, 71L) */ ((/* 73L, 69L) */ ((var_1_25) + (var_1_26))) <= (var_1_27))) {
			/* 85L) */ var_1_24 = (
				var_1_26
			);
		} else {
			/* 90L) */ var_1_24 = (
				/* 89L) */ (abs (
					var_1_26
				))
			);
		}
	}


	// From: CodeObject3
	/* 116L) */ if (/* 101L, 100L) */ ((/* 102L, 98L) */ (- (var_1_23))) >= (var_1_22))) {
		/* 115L) */ var_1_28 = (
			/* 114L) */ (min (
				/* 114L) */ (
					var_1_23
				) , (
					/* 113L) */ (abs (
						var_1_29
					))
				)
			))
		);
	}


	// From: CodeObject4
	/* 186L) */ if (/* 125L, 124L) */ ((/* 126L, 122L) */ ((var_1_24) + (var_1_31))) >= (var_1_27))) {
		/* 163L) */ if (/* 140L, 139L) */ ((var_1_32) <= (/* 142L, 138L) */ ((var_1_33) - (var_1_31))))) {
			/* 161L) */ if (var_1_34) {
				/* 160L) */ var_1_30 = (
					/* 159L) */ ((
						var_1_35
					) - (
						/* 158L) */ ((
							16
						) + (
							var_1_36
						))
					))
				);
			}
		}
	} else {
		/* 184L) */ if (/* 170L, 169L) */ ((/* 171L, 167L) */ ((var_1_35) / (1))) <= (8))) {
			/* 183L) */ var_1_30 = (
				var_1_36
			);
		}
	}


	// From: CodeObject5
	/* 193L) */ var_1_37 = (
		var_1_38
	);


	// From: CodeObject6
	/* 225L) */ if (/* 205L, 204L) */ ((var_1_27) > (/* 207L, 203L) */ ((var_1_38) + (/* 209L, 202L) */ ((var_1_30) - (var_1_31))))))) {
		/* 224L) */ var_1_39 = (
			/* 223L) */ ((
				10u
			) + (
				var_1_37
			))
		);
	}


	// From: CodeObject7
	/* 248L) */ if (/* 232L, 231L) */ ((var_1_24) < (var_1_41))) {
		/* 247L) */ var_1_40 = (
			/* 246L) */ (min (
				/* 246L) */ (
					/* 244L) */ ((
						/* 242L) */ ((
							var_1_31
						) + (
							var_1_30
						))
					) - (
						500
					))
				) , (
					var_1_26
				)
			))
		);
	}


	// From: CodeObject8
	/* 275L) */ if (/* 257L, 256L) */ ((/* 258L, 254L) */ (~ (/* 259L, 253L) */ (abs (var_1_38))))) >= (var_1_41))) {
		/* 274L) */ var_1_42 = (
			/* 273L) */ (abs (
				/* 272L) */ (abs (
					/* 271L) */ ((
						var_1_38
					) - (
						var_1_36
					))
				))
			))
		);
	}
}



void updateVariables(void) {
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 65535);
	assume_abort_if_not(var_1_5 != 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 32767);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_15 >= -2147483647);
	assume_abort_if_not(var_1_15 <= 2147483646);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -128);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_26 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_26 >= -128);
	assume_abort_if_not(var_1_26 <= 127);
	var_1_27 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_27 >= -2147483648);
	assume_abort_if_not(var_1_27 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 65535);
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 2147483647);
	assume_abort_if_not(var_1_33 <= 4294967295);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 32767);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 16383);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_41 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_41 >= -32768);
	assume_abort_if_not(var_1_41 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (/* 279L, 8L, 16L, 316L, 336L, 913L, 1095L, 33L) */ ((last_1_var_1_10) != (/* 282L, 7L, 18L, 318L, 338L, 912L, 1098L, 32L) */ ((last_1_var_1_10) & (/* 285L, 6L, 20L, 320L, 340L, 911L, 1101L, 31L) */ ((last_1_var_1_18) / (var_1_5))))))) {
	} else {
	}
	if (/* 302L, 43L, 47L, 455L, 480L, 1118L) */ ((var_1_20) >= (var_1_1))) {
		if (var_1_7) {
		}
	} else {
		if (/* 316L, 67L, 73L, 469L, 494L, 1132L) */ ((/* 317L, 65L, 74L, 470L, 495L, 1133L) */ (min (/* 317L, 65L, 74L, 470L, 495L, 1133L) */ (var_1_1) , (var_1_14)))) >= (var_1_5))) {
		}
	}
	if (var_1_7) {
		if (/* 331L, 98L, 101L, 555L, 578L, 1147L) */ (! (var_1_11))) {
		} else {
			if (/* 340L, 111L, 115L, 564L, 587L, 1156L) */ ((var_1_5) > (last_1_var_1_10))) {
			}
		}
	}
	if (/* 360L, 156L, 164L, 667L, 682L, 1176L) */ ((var_1_18) > (/* 362L, 155L, 166L, 669L, 684L, 1178L) */ ((var_1_12) + (/* 364L, 154L, 168L, 671L, 686L, 1180L) */ ((var_1_1) / (var_1_5))))))) {
		if (var_1_7) {
		}
	}
	if (/* 375L, 188L, 192L, 723L, 736L, 1191L) */ ((5) >= (var_1_14))) {
	}
	if (/* 397L, 227L, 233L, 833L, 857L, 1213L) */ ((var_1_17) > (/* 399L, 226L, 235L, 835L, 859L, 1215L) */ ((var_1_1) * (var_1_14))))) {
	} else {
		if (/* 408L, 249L, 257L, 844L, 868L, 1224L) */ ((/* 409L, 247L, 258L, 845L, 869L, 1225L) */ ((var_1_15) * (/* 411L, 246L, 260L, 847L, 871L, 1227L) */ ((var_1_1) | (var_1_14))))) != (var_1_18))) {
		}
	}
	return /* 426L) */ ((
	/* 425L) */ ((
		/* 424L) */ ((
			/* 423L) */ ((
				/* 422L) */ ((
					/* 421L) */ ((
						/* 420L) */ ((
							/* 278L, 34L, 315L, 335L, 925L, 1094L, 45L) */ ((
								/* 279L, 8L, 16L, 316L, 336L, 913L, 1095L, 33L) */ ((
									last_1_var_1_10
								) != (
									/* 282L, 7L, 18L, 318L, 338L, 912L, 1098L, 32L) */ ((
										last_1_var_1_10
									) & (
										/* 285L, 6L, 20L, 320L, 340L, 911L, 1101L, 31L) */ ((
											last_1_var_1_18
										) / (
											var_1_5
										))
									))
								))
							) ? (
								/* 289L, 28L, 323L, 343L, 920L, 1105L, 40L) */ ((
									var_1_1
								) == (
									/* 289L, 28L, 323L, 343L, 920L, 1105L, 40L) */ ((unsigned long int) (
										/* 292L, 27L, 326L, 346L, 919L, 1108L, 39L) */ ((
											var_1_5
										) + (
											last_1_var_1_10
										))
									))
								))
							) : (
								/* 296L, 32L, 329L, 349L, 924L, 1112L, 44L) */ ((
									var_1_1
								) == (
									/* 296L, 32L, 329L, 349L, 924L, 1112L, 44L) */ ((unsigned long int) (
										var_1_5
									))
								))
							))
						) && (
							/* 301L, 85L, 454L, 479L, 1117L) */ ((
								/* 302L, 43L, 47L, 455L, 480L, 1118L) */ ((
									var_1_20
								) >= (
									var_1_1
								))
							) ? (
								/* 305L, 62L, 458L, 483L, 1121L) */ ((
									var_1_7
								) ? (
									/* 307L, 60L, 460L, 485L, 1123L) */ ((
										var_1_6
									) == (
										/* 307L, 60L, 460L, 485L, 1123L) */ ((double) (
											/* 310L, 59L, 463L, 488L, 1126L) */ (max (
												/* 310L, 59L, 463L, 488L, 1126L) */ (
													var_1_8
												) , (
													/* 312L, 58L, 465L, 490L, 1128L) */ ((
														4.75
													) + (
														var_1_9
													))
												)
											))
										))
									))
								) : (
									1
								))
							) : (
								/* 315L, 83L, 468L, 493L, 1131L) */ ((
									/* 316L, 67L, 73L, 469L, 494L, 1132L) */ ((
										/* 317L, 65L, 74L, 470L, 495L, 1133L) */ (min (
											/* 317L, 65L, 74L, 470L, 495L, 1133L) */ (
												var_1_1
											) , (
												var_1_14
											)
										))
									) >= (
										var_1_5
									))
								) ? (
									/* 321L, 81L, 474L, 499L, 1137L) */ ((
										var_1_6
									) == (
										/* 321L, 81L, 474L, 499L, 1137L) */ ((double) (
											var_1_9
										))
									))
								) : (
									1
								))
							))
						))
					) && (
						/* 328L, 127L, 552L, 575L, 1144L) */ ((
							var_1_7
						) ? (
							/* 330L, 125L, 554L, 577L, 1146L) */ ((
								/* 331L, 98L, 101L, 555L, 578L, 1147L) */ (! (
									var_1_11
								))
							) ? (
								/* 333L, 108L, 557L, 580L, 1149L) */ ((
									var_1_10
								) == (
									/* 333L, 108L, 557L, 580L, 1149L) */ ((unsigned short int) (
										/* 336L, 107L, 560L, 583L, 1152L) */ ((
											var_1_12
										) + (
											var_1_13
										))
									))
								))
							) : (
								/* 339L, 123L, 563L, 586L, 1155L) */ ((
									/* 340L, 111L, 115L, 564L, 587L, 1156L) */ ((
										var_1_5
									) > (
										last_1_var_1_10
									))
								) ? (
									/* 344L, 121L, 568L, 591L, 1160L) */ ((
										var_1_10
									) == (
										/* 344L, 121L, 568L, 591L, 1160L) */ ((unsigned short int) (
											var_1_13
										))
									))
								) : (
									1
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 350L, 143L, 617L, 627L, 1166L) */ ((
						var_1_14
					) == (
						/* 350L, 143L, 617L, 627L, 1166L) */ ((signed long int) (
							/* 353L, 142L, 620L, 630L, 1169L) */ (min (
								/* 353L, 142L, 620L, 630L, 1169L) */ (
									/* 354L, 140L, 621L, 631L, 1170L) */ ((
										var_1_1
									) - (
										var_1_12
									))
								) , (
									var_1_15
								)
							))
						))
					))
				))
			) && (
				/* 359L, 181L, 666L, 681L, 1175L) */ ((
					/* 360L, 156L, 164L, 667L, 682L, 1176L) */ ((
						var_1_18
					) > (
						/* 362L, 155L, 166L, 669L, 684L, 1178L) */ ((
							var_1_12
						) + (
							/* 364L, 154L, 168L, 671L, 686L, 1180L) */ ((
								var_1_1
							) / (
								var_1_5
							))
						))
					))
				) ? (
					/* 367L, 179L, 674L, 689L, 1183L) */ ((
						var_1_7
					) ? (
						/* 369L, 177L, 676L, 691L, 1185L) */ ((
							var_1_16
						) == (
							/* 369L, 177L, 676L, 691L, 1185L) */ ((signed char) (
								var_1_17
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
			/* 374L, 204L, 722L, 735L, 1190L) */ ((
				/* 375L, 188L, 192L, 723L, 736L, 1191L) */ ((
					5
				) >= (
					var_1_14
				))
			) ? (
				/* 378L, 202L, 726L, 739L, 1194L) */ ((
					var_1_18
				) == (
					/* 378L, 202L, 726L, 739L, 1194L) */ ((signed long int) (
						/* 381L, 201L, 729L, 742L, 1197L) */ ((
							var_1_12
						) - (
							/* 383L, 200L, 731L, 744L, 1199L) */ ((
								var_1_10
							) + (
								var_1_5
							))
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 389L, 212L, 768L, 777L, 1205L) */ ((
			var_1_19
		) == (
			/* 389L, 212L, 768L, 777L, 1205L) */ ((float) (
				/* 392L, 211L, 771L, 780L, 1208L) */ (min (
					/* 392L, 211L, 771L, 780L, 1208L) */ (
						var_1_8
					) , (
						var_1_9
					)
				))
			))
		))
	))
) && (
	/* 396L, 271L, 832L, 856L, 1212L) */ ((
		/* 397L, 227L, 233L, 833L, 857L, 1213L) */ ((
			var_1_17
		) > (
			/* 399L, 226L, 235L, 835L, 859L, 1215L) */ ((
				var_1_1
			) * (
				var_1_14
			))
		))
	) ? (
		/* 402L, 242L, 838L, 862L, 1218L) */ ((
			var_1_20
		) == (
			/* 402L, 242L, 838L, 862L, 1218L) */ ((signed long int) (
				/* 405L, 241L, 841L, 865L, 1221L) */ (abs (
					var_1_14
				))
			))
		))
	) : (
		/* 407L, 269L, 843L, 867L, 1223L) */ ((
			/* 408L, 249L, 257L, 844L, 868L, 1224L) */ ((
				/* 409L, 247L, 258L, 845L, 869L, 1225L) */ ((
					var_1_15
				) * (
					/* 411L, 246L, 260L, 847L, 871L, 1227L) */ ((
						var_1_1
					) | (
						var_1_14
					))
				))
			) != (
				var_1_18
			))
		) ? (
			/* 415L, 267L, 851L, 875L, 1231L) */ ((
				var_1_20
			) == (
				/* 415L, 267L, 851L, 875L, 1231L) */ ((signed long int) (
					-32
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
