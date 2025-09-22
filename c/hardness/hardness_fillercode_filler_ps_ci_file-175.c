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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch175Filler_PS_CI.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 256;
unsigned short int var_1_2 = 64859;
unsigned short int var_1_3 = 10;
unsigned short int var_1_4 = 50;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
unsigned char var_1_13 = 1;
float var_1_15 = 256.9;
float var_1_17 = 64.375;
float var_1_18 = 16.6;
float var_1_19 = 2.75;
float var_1_20 = -0.7;
float var_1_21 = 255.8;
signed short int var_1_22 = 0;
unsigned char var_1_23 = 5;
signed short int var_1_24 = -128;
signed short int var_1_25 = 10000;
signed short int var_1_26 = 25;
signed short int var_1_27 = 1;
signed long int var_1_28 = -500;
signed short int var_1_29 = -16;
signed long int var_1_30 = -5;
signed long int var_1_31 = -256;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 1;
unsigned char var_1_37 = 1;
signed short int var_1_38 = 32;
unsigned long int var_1_39 = 25;
unsigned long int var_1_40 = 3139419749;
unsigned long int var_1_41 = 8;
signed long int var_1_42 = -256;
signed long int var_1_43 = 4;
float var_1_44 = 4.25;
signed char var_1_47 = 16;
float var_1_49 = 1.875;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 252L, 25L) */ if (/* 253L, 6L, 7L) */ ((256) <= (/* 255L, 5L, 9L) */ ((var_1_30) & (var_1_31))))) {
		/* 258L, 24L) */ var_1_29 = (
			/* 261L, 23L) */ (abs (
				/* 262L, 22L) */ (min (
					/* 262L, 22L) */ (
						/* 263L, 20L) */ (abs (
							var_1_3
						))
					) , (
						var_1_25
					)
				))
			))
		);
	}


	// From: CodeObject2
	/* 290L, 53L) */ if (/* 291L, 31L, 32L) */ ((var_1_35) || (var_1_36))) {
		/* 294L, 51L) */ if (/* 295L, 40L, 41L) */ ((var_1_28) < (var_1_3))) {
			/* 298L, 50L) */ var_1_34 = (
				var_1_37
			);
		}
	}


	// From: CodeObject3
	/* 302L, 106L) */ if (/* 303L, 63L, 64L) */ ((/* 304L, 59L, 65L) */ ((var_1_28) ^ (var_1_3))) >= (/* 307L, 62L, 68L) */ (max (/* 307L, 62L, 68L) */ (var_1_28) , (var_1_1)))))) {
		/* 310L, 100L) */ if (var_1_7) {
			/* 312L, 98L) */ if (/* 313L, 83L, 84L) */ ((var_1_1) < (var_1_28))) {
				/* 316L, 93L) */ var_1_38 = (
					var_1_3
				);
			} else {
				/* 320L, 97L) */ var_1_38 = (
					-2
				);
			}
		}
	} else {
		/* 324L, 105L) */ var_1_38 = (
			var_1_3
		);
	}


	// From: CodeObject4
	/* 328L, 165L) */ if (/* 329L, 112L, 113L) */ ((2) <= (var_1_2))) {
		/* 332L, 124L) */ var_1_39 = (
			/* 335L, 123L) */ ((
				var_1_40
			) - (
				var_1_41
			))
		);
	} else {
		/* 338L, 163L) */ if (/* 339L, 133L, 134L) */ ((/* 340L, 131L, 135L) */ ((/* 341L, 127L, 136L) */ ((var_1_28) ^ (var_1_24))) / (/* 344L, 130L, 139L) */ (min (/* 344L, 130L, 139L) */ (var_1_42) , (var_1_43)))))) != (var_1_28))) {
			/* 348L, 158L) */ var_1_39 = (
				/* 351L, 157L) */ (min (
					/* 351L, 157L) */ (
						/* 352L, 155L) */ (abs (
							var_1_40
						))
					) , (
						var_1_41
					)
				))
			);
		} else {
			/* 355L, 162L) */ var_1_39 = (
				var_1_40
			);
		}
	}


	// From: CodeObject5
	/* 359L, 188L) */ if (/* 360L, 171L, 172L) */ ((var_1_28) > (var_1_39))) {
		/* 363L, 183L) */ var_1_44 = (
			/* 366L, 182L) */ ((
				var_1_17
			) - (
				var_1_18
			))
		);
	} else {
		/* 369L, 187L) */ var_1_44 = (
			var_1_18
		);
	}


	// From: CodeObject6
	/* 373L, 236L) */ if (var_1_7) {
		/* 375L, 230L) */ if (/* 376L, 197L, 198L) */ ((var_1_41) <= (var_1_43))) {
			/* 379L, 228L) */ if (/* 380L, 209L, 210L) */ ((/* 381L, 207L, 211L) */ (abs (/* 382L, 206L, 212L) */ ((var_1_18) / (var_1_49))))) <= (var_1_17))) {
				/* 386L, 227L) */ var_1_47 = (
					/* 389L, 226L) */ (max (
						/* 389L, 226L) */ (
							var_1_23
						) , (
							5
						)
					))
				);
			}
		}
	} else {
		/* 392L, 235L) */ var_1_47 = (
			var_1_23
		);
	}


	// From: Req1Batch175Filler_PS_CI
	unsigned short int stepLocal_1 = var_1_2;
	signed long int stepLocal_0 = 2;
	/* 823L, 40L, 254L, 273L) */ if (/* 813L, 8L, 9L, 255L, 274L) */ ((/* 812L, 6L, 10L, 256L, 275L) */ ((/* 810L, 4L, 11L, 257L, 276L) */ ((var_1_2) - (var_1_3))) - (var_1_4))) > (stepLocal_0))) {
		/* 822L, 38L, 262L, 281L) */ if (/* 815L, 25L, 26L, 263L, 282L) */ ((stepLocal_1) < (var_1_3))) {
			/* 821L, 37L, 266L, 285L) */ var_1_1 = (
				/* 820L, 36L, 269L, 288L) */ ((
					32
				) + (
					var_1_3
				))
			);
		}
	}


	// From: Req2Batch175Filler_PS_CI
	/* 829L, 52L, 331L, 340L) */ var_1_5 = (
		/* 832L, 51L, 334L, 343L) */ (! (
			/* 833L, 50L, 335L, 344L) */ ((
				var_1_6
			) && (
				var_1_7
			))
		))
	);


	// From: Req5Batch175Filler_PS_CI
	/* 869L, 158L, 491L, 517L) */ if (/* 870L, 122L, 123L, 492L, 518L) */ ((/* 871L, 120L, 124L, 493L, 519L) */ ((var_1_2) & (var_1_3))) > (var_1_4))) {
		/* 875L, 150L, 497L, 523L) */ if (/* 876L, 135L, 136L, 498L, 524L) */ ((var_1_1) > (var_1_3))) {
			/* 879L, 149L, 501L, 527L) */ var_1_15 = (
				/* 882L, 148L, 504L, 530L) */ ((
					var_1_17
				) - (
					/* 884L, 147L, 506L, 532L) */ ((
						var_1_18
					) + (
						var_1_19
					))
				))
			);
		}
	} else {
		/* 887L, 157L, 509L, 535L) */ var_1_15 = (
			/* 890L, 156L, 512L, 538L) */ ((
				var_1_19
			) + (
				var_1_18
			))
		);
	}


	// From: Req6Batch175Filler_PS_CI
	/* 895L, 175L, 595L, 607L) */ var_1_20 = (
		/* 898L, 174L, 598L, 610L) */ ((
			var_1_18
		) + (
			/* 900L, 173L, 600L, 612L) */ (max (
				/* 900L, 173L, 600L, 612L) */ (
					/* 901L, 171L, 601L, 613L) */ ((
						var_1_19
					) - (
						5.9f
					))
				) , (
					var_1_21
				)
			))
		))
	);


	// From: Req7Batch175Filler_PS_CI
	/* 907L, 238L, 643L, 677L) */ if (/* 908L, 190L, 191L, 644L, 678L) */ ((/* 909L, 186L, 192L, 645L, 679L) */ ((/* 910L, 184L, 193L, 646L, 680L) */ ((var_1_3) >> (var_1_23))) + (var_1_1))) < (/* 914L, 189L, 197L, 650L, 684L) */ (min (/* 914L, 189L, 197L, 650L, 684L) */ (var_1_4) , (var_1_2)))))) {
		/* 917L, 222L, 653L, 687L) */ var_1_22 = (
			/* 920L, 221L, 656L, 690L) */ ((
				/* 921L, 215L, 657L, 691L) */ (min (
					/* 921L, 215L, 657L, 691L) */ (
						var_1_23
					) , (
						/* 923L, 214L, 659L, 693L) */ ((
							var_1_1
						) + (
							var_1_24
						))
					)
				))
			) + (
				/* 926L, 220L, 662L, 696L) */ ((
					/* 927L, 218L, 663L, 697L) */ ((
						var_1_25
					) - (
						var_1_26
					))
				) - (
					var_1_27
				))
			))
		);
	} else {
		/* 931L, 236L, 667L, 701L) */ if (/* 932L, 225L, 226L, 668L, 702L) */ ((var_1_1) <= (var_1_26))) {
			/* 935L, 235L, 671L, 705L) */ var_1_22 = (
				128
			);
		}
	}


	// From: Req8Batch175Filler_PS_CI
	/* 941L, 249L, 779L, 785L) */ var_1_28 = (
		var_1_2
	);


	// From: Req3Batch175Filler_PS_CI
	/* 842L, 84L, 371L, 389L) */ if (/* 843L, 65L, 66L, 372L, 390L) */ ((/* 844L, 63L, 67L, 373L, 391L) */ ((var_1_20) * (/* 846L, 62L, 69L, 375L, 393L) */ ((var_1_15) + (var_1_20))))) > (var_1_20))) {
		/* 850L, 83L, 379L, 397L) */ var_1_8 = (
			var_1_7
		);
	}


	// From: Req4Batch175Filler_PS_CI
	/* 856L, 111L, 439L, 452L) */ var_1_13 = (
		/* 859L, 110L, 442L, 455L) */ ((
			/* 860L, 107L, 443L, 456L) */ ((
				/* 861L, 105L, 444L, 457L) */ ((
					var_1_2
				) * (
					var_1_4
				))
			) > (
				var_1_28
			))
		) && (
			/* 865L, 109L, 448L, 461L) */ (! (
				var_1_6
			))
		))
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 49151);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 16384);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 15);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -8191);
	assume_abort_if_not(var_1_24 <= 8191);
	var_1_25 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_25 >= 8191);
	assume_abort_if_not(var_1_25 <= 16383);
	var_1_26 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 8191);
	var_1_27 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 16383);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483648);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967294);
	var_1_41 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 2147483647);
	var_1_42 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_42 >= -2147483648);
	assume_abort_if_not(var_1_42 <= 2147483647);
	assume_abort_if_not(var_1_42 != 0);
	var_1_43 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_43 >= -2147483648);
	assume_abort_if_not(var_1_43 <= 2147483647);
	assume_abort_if_not(var_1_43 != 0);
	var_1_49 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_49 >= -922337.2036854776000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
	assume_abort_if_not(var_1_49 != 0.0F);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 397L, 8L, 16L, 293L, 312L, 947L) */ ((/* 398L, 6L, 17L, 294L, 313L, 948L) */ ((/* 399L, 4L, 18L, 295L, 314L, 949L) */ ((var_1_2) - (var_1_3))) - (var_1_4))) > (2))) {
		if (/* 405L, 25L, 29L, 301L, 320L, 955L) */ ((var_1_2) < (var_1_3))) {
		}
	}
	if (/* 430L, 65L, 73L, 408L, 426L, 980L) */ ((/* 431L, 63L, 74L, 409L, 427L, 981L) */ ((var_1_20) * (/* 433L, 62L, 76L, 411L, 429L, 983L) */ ((var_1_15) + (var_1_20))))) > (var_1_20))) {
	}
	if (/* 457L, 122L, 128L, 544L, 570L, 1007L) */ ((/* 458L, 120L, 129L, 545L, 571L, 1008L) */ ((var_1_2) & (var_1_3))) > (var_1_4))) {
		if (/* 463L, 135L, 139L, 550L, 576L, 1013L) */ ((var_1_1) > (var_1_3))) {
		}
	} else {
	}
	if (/* 495L, 190L, 200L, 712L, 746L, 1045L) */ ((/* 496L, 186L, 201L, 713L, 747L, 1046L) */ ((/* 497L, 184L, 202L, 714L, 748L, 1047L) */ ((var_1_3) >> (var_1_23))) + (var_1_1))) < (/* 501L, 189L, 206L, 718L, 752L, 1051L) */ (min (/* 501L, 189L, 206L, 718L, 752L, 1051L) */ (var_1_4) , (var_1_2)))))) {
	} else {
		if (/* 519L, 225L, 229L, 736L, 770L, 1069L) */ ((var_1_1) <= (var_1_26))) {
		}
	}
	return /* 539L) */ ((
	/* 538L) */ ((
		/* 537L) */ ((
			/* 536L) */ ((
				/* 535L) */ ((
					/* 534L) */ ((
						/* 533L) */ ((
							/* 396L, 41L, 292L, 311L, 946L) */ ((
								/* 397L, 8L, 16L, 293L, 312L, 947L) */ ((
									/* 398L, 6L, 17L, 294L, 313L, 948L) */ ((
										/* 399L, 4L, 18L, 295L, 314L, 949L) */ ((
											var_1_2
										) - (
											var_1_3
										))
									) - (
										var_1_4
									))
								) > (
									2
								))
							) ? (
								/* 404L, 39L, 300L, 319L, 954L) */ ((
									/* 405L, 25L, 29L, 301L, 320L, 955L) */ ((
										var_1_2
									) < (
										var_1_3
									))
								) ? (
									/* 408L, 37L, 304L, 323L, 958L) */ ((
										var_1_1
									) == (
										/* 408L, 37L, 304L, 323L, 958L) */ ((unsigned short int) (
											/* 411L, 36L, 307L, 326L, 961L) */ ((
												32
											) + (
												var_1_3
											))
										))
									))
								) : (
									1
								))
							) : (
								1
							))
						) && (
							/* 416L, 52L, 349L, 358L, 966L) */ ((
								var_1_5
							) == (
								/* 416L, 52L, 349L, 358L, 966L) */ ((unsigned char) (
									/* 419L, 51L, 352L, 361L, 969L) */ (! (
										/* 420L, 50L, 353L, 362L, 970L) */ ((
											var_1_6
										) && (
											var_1_7
										))
									))
								))
							))
						))
					) && (
						/* 429L, 85L, 407L, 425L, 979L) */ ((
							/* 430L, 65L, 73L, 408L, 426L, 980L) */ ((
								/* 431L, 63L, 74L, 409L, 427L, 981L) */ ((
									var_1_20
								) * (
									/* 433L, 62L, 76L, 411L, 429L, 983L) */ ((
										var_1_15
									) + (
										var_1_20
									))
								))
							) > (
								var_1_20
							))
						) ? (
							/* 437L, 83L, 415L, 433L, 987L) */ ((
								var_1_8
							) == (
								/* 437L, 83L, 415L, 433L, 987L) */ ((unsigned char) (
									var_1_7
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 443L, 111L, 465L, 478L, 993L) */ ((
						var_1_13
					) == (
						/* 443L, 111L, 465L, 478L, 993L) */ ((unsigned char) (
							/* 446L, 110L, 468L, 481L, 996L) */ ((
								/* 447L, 107L, 469L, 482L, 997L) */ ((
									/* 448L, 105L, 470L, 483L, 998L) */ ((
										var_1_2
									) * (
										var_1_4
									))
								) > (
									var_1_28
								))
							) && (
								/* 452L, 109L, 474L, 487L, 1002L) */ (! (
									var_1_6
								))
							))
						))
					))
				))
			) && (
				/* 456L, 159L, 543L, 569L, 1006L) */ ((
					/* 457L, 122L, 128L, 544L, 570L, 1007L) */ ((
						/* 458L, 120L, 129L, 545L, 571L, 1008L) */ ((
							var_1_2
						) & (
							var_1_3
						))
					) > (
						var_1_4
					))
				) ? (
					/* 462L, 151L, 549L, 575L, 1012L) */ ((
						/* 463L, 135L, 139L, 550L, 576L, 1013L) */ ((
							var_1_1
						) > (
							var_1_3
						))
					) ? (
						/* 466L, 149L, 553L, 579L, 1016L) */ ((
							var_1_15
						) == (
							/* 466L, 149L, 553L, 579L, 1016L) */ ((float) (
								/* 469L, 148L, 556L, 582L, 1019L) */ ((
									var_1_17
								) - (
									/* 471L, 147L, 558L, 584L, 1021L) */ ((
										var_1_18
									) + (
										var_1_19
									))
								))
							))
						))
					) : (
						1
					))
				) : (
					/* 474L, 157L, 561L, 587L, 1024L) */ ((
						var_1_15
					) == (
						/* 474L, 157L, 561L, 587L, 1024L) */ ((float) (
							/* 477L, 156L, 564L, 590L, 1027L) */ ((
								var_1_19
							) + (
								var_1_18
							))
						))
					))
				))
			))
		) && (
			/* 482L, 175L, 619L, 631L, 1032L) */ ((
				var_1_20
			) == (
				/* 482L, 175L, 619L, 631L, 1032L) */ ((float) (
					/* 485L, 174L, 622L, 634L, 1035L) */ ((
						var_1_18
					) + (
						/* 487L, 173L, 624L, 636L, 1037L) */ (max (
							/* 487L, 173L, 624L, 636L, 1037L) */ (
								/* 488L, 171L, 625L, 637L, 1038L) */ ((
									var_1_19
								) - (
									5.9f
								))
							) , (
								var_1_21
							)
						))
					))
				))
			))
		))
	) && (
		/* 494L, 239L, 711L, 745L, 1044L) */ ((
			/* 495L, 190L, 200L, 712L, 746L, 1045L) */ ((
				/* 496L, 186L, 201L, 713L, 747L, 1046L) */ ((
					/* 497L, 184L, 202L, 714L, 748L, 1047L) */ ((
						var_1_3
					) >> (
						var_1_23
					))
				) + (
					var_1_1
				))
			) < (
				/* 501L, 189L, 206L, 718L, 752L, 1051L) */ (min (
					/* 501L, 189L, 206L, 718L, 752L, 1051L) */ (
						var_1_4
					) , (
						var_1_2
					)
				))
			))
		) ? (
			/* 504L, 222L, 721L, 755L, 1054L) */ ((
				var_1_22
			) == (
				/* 504L, 222L, 721L, 755L, 1054L) */ ((signed short int) (
					/* 507L, 221L, 724L, 758L, 1057L) */ ((
						/* 508L, 215L, 725L, 759L, 1058L) */ (min (
							/* 508L, 215L, 725L, 759L, 1058L) */ (
								var_1_23
							) , (
								/* 510L, 214L, 727L, 761L, 1060L) */ ((
									var_1_1
								) + (
									var_1_24
								))
							)
						))
					) + (
						/* 513L, 220L, 730L, 764L, 1063L) */ ((
							/* 514L, 218L, 731L, 765L, 1064L) */ ((
								var_1_25
							) - (
								var_1_26
							))
						) - (
							var_1_27
						))
					))
				))
			))
		) : (
			/* 518L, 237L, 735L, 769L, 1068L) */ ((
				/* 519L, 225L, 229L, 736L, 770L, 1069L) */ ((
					var_1_1
				) <= (
					var_1_26
				))
			) ? (
				/* 522L, 235L, 739L, 773L, 1072L) */ ((
					var_1_22
				) == (
					/* 522L, 235L, 739L, 773L, 1072L) */ ((signed short int) (
						128
					))
				))
			) : (
				1
			))
		))
	))
) && (
	/* 528L, 249L, 791L, 797L, 1078L) */ ((
		var_1_28
	) == (
		/* 528L, 249L, 791L, 797L, 1078L) */ ((signed long int) (
			var_1_2
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
