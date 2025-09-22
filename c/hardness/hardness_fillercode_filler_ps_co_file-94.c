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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch94Filler_PS_CO.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
signed char var_1_2 = 0;
signed char var_1_3 = 32;
signed short int var_1_5 = 16;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 0;
signed long int var_1_9 = 50;
double var_1_10 = 32.7;
double var_1_11 = 64.25;
double var_1_12 = 10.3;
double var_1_13 = 3.3;
double var_1_14 = 16.5;
double var_1_15 = 7.125;
unsigned short int var_1_16 = 50;
unsigned short int var_1_17 = 64;
unsigned long int var_1_18 = 16;
signed short int var_1_19 = 8;
signed long int var_1_20 = -4;
double var_1_21 = 15.125;
unsigned char var_1_22 = 1;
float var_1_28 = 999999999.85;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
signed short int var_1_31 = -256;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned short int var_1_34 = 50;
unsigned short int var_1_35 = 2;
unsigned short int var_1_36 = 128;
float var_1_37 = 9.25;
float var_1_39 = 127.2;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_1 = 1;
signed long int last_1_var_1_20 = -4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 305L, 138L) */ if (/* 306L, 82L, 83L) */ ((/* 307L, 80L, 84L) */ ((var_1_16) * (var_1_9))) == (var_1_20))) {
		/* 311L, 114L) */ if (/* 312L, 95L, 96L) */ ((var_1_9) > (var_1_20))) {
			/* 315L, 113L) */ var_1_22 = (
				/* 318L, 112L) */ ((
					/* 319L, 110L) */ ((
						/* 320L, 106L) */ ((
							var_1_21
						) * (
							var_1_10
						))
					) > (
						/* 323L, 109L) */ ((
							16.6f
						) / (
							var_1_28
						))
					))
				) && (
					var_1_29
				))
			);
		}
	} else {
		/* 327L, 136L) */ if (/* 328L, 119L, 120L) */ ((5) <= (/* 330L, 118L, 122L) */ (abs (var_1_16))))) {
			/* 332L, 135L) */ var_1_22 = (
				/* 335L, 134L) */ ((
					/* 336L, 132L) */ ((
						var_1_20
					) >= (
						var_1_16
					))
				) || (
					var_1_30
				))
			);
		}
	}


	// From: CodeObject2
	/* 340L, 193L) */ if (var_1_29) {
		/* 342L, 150L) */ var_1_31 = (
			/* 345L, 149L) */ (abs (
				/* 346L, 148L) */ (abs (
					var_1_9
				))
			))
		);
	} else {
		/* 348L, 191L) */ if (/* 349L, 157L, 158L) */ ((var_1_18) >= (/* 351L, 156L, 160L) */ ((/* 352L, 153L, 161L) */ (~ (var_1_9))) ^ (/* 354L, 155L, 163L) */ (abs (var_1_16))))))) {
			/* 356L, 185L) */ if (/* 357L, 174L, 175L) */ ((var_1_21) <= (var_1_10))) {
				/* 360L, 184L) */ var_1_31 = (
					var_1_9
				);
			}
		} else {
			/* 364L, 190L) */ var_1_31 = (
				var_1_16
			);
		}
	}


	// From: CodeObject3
	/* 369L, 200L) */ var_1_32 = (
		1
	);


	// From: CodeObject4
	/* 374L, 234L) */ if (/* 375L, 207L, 208L) */ ((var_1_1) || (var_1_30))) {
		/* 378L, 217L) */ var_1_33 = (
			var_1_30
		);
	} else {
		/* 382L, 232L) */ if (/* 383L, 220L, 221L) */ ((var_1_21) > (var_1_10))) {
			/* 386L, 231L) */ var_1_33 = (
				/* 389L, 230L) */ (! (
					var_1_29
				))
			);
		}
	}


	// From: CodeObject5
	/* 391L, 268L) */ if (/* 392L, 242L, 243L) */ ((var_1_21) > (63.75f))) {
		/* 395L, 266L) */ if (/* 396L, 251L, 252L) */ ((var_1_28) > (7.9f))) {
			/* 399L, 261L) */ var_1_34 = (
				var_1_35
			);
		} else {
			/* 403L, 265L) */ var_1_34 = (
				var_1_36
			);
		}
	}


	// From: CodeObject6
	/* 408L, 301L) */ if (var_1_1) {
		/* 410L, 299L) */ if (/* 411L, 279L, 280L) */ ((/* 412L, 277L, 281L) */ ((var_1_35) + (var_1_16))) <= (var_1_16))) {
			/* 416L, 294L) */ var_1_37 = (
				/* 419L, 293L) */ (abs (
					var_1_39
				))
			);
		} else {
			/* 421L, 298L) */ var_1_37 = (
				var_1_39
			);
		}
	}


	// From: Req2Batch94Filler_PS_CO
	/* 35L, 109L, 372L, 404L, 866L, 940L) */ if (/* 3L, 62L, 63L, 373L, 405L, 834L, 941L) */ ((var_1_8) || (last_1_var_1_1))) {
		/* 29L, 103L, 376L, 408L, 860L, 945L) */ if (/* 10L, 73L, 74L, 377L, 409L, 841L, 946L) */ ((/* 7L, 71L, 75L, 378L, 410L, 838L, 947L) */ ((var_1_2) >= (last_1_var_1_20))) && (last_1_var_1_1))) {
			/* 17L, 89L, 382L, 414L, 848L, 953L) */ var_1_9 = (
				/* 16L, 88L, 385L, 417L, 847L, 956L) */ (min (
					/* 16L, 88L, 385L, 417L, 847L, 956L) */ (
						var_1_3
					) , (
						last_1_var_1_20
					)
				))
			);
		} else {
			/* 28L, 101L, 388L, 420L, 859L, 960L) */ if (last_1_var_1_1) {
				/* 23L, 96L, 390L, 422L, 854L, 963L) */ var_1_9 = (
					var_1_5
				);
			} else {
				/* 27L, 100L, 394L, 426L, 858L, 967L) */ var_1_9 = (
					var_1_2
				);
			}
		}
	} else {
		/* 34L, 108L, 398L, 430L, 865L, 971L) */ var_1_9 = (
			last_1_var_1_20
		);
	}


	// From: Req3Batch94Filler_PS_CO
	/* 980L, 128L, 502L, 518L) */ var_1_10 = (
		/* 983L, 127L, 505L, 521L) */ ((
			/* 984L, 121L, 506L, 522L) */ (min (
				/* 984L, 121L, 506L, 522L) */ (
					var_1_11
				) , (
					var_1_12
				)
			))
		) + (
			/* 987L, 126L, 509L, 525L) */ ((
				var_1_13
			) + (
				/* 989L, 125L, 511L, 527L) */ ((
					var_1_14
				) - (
					var_1_15
				))
			))
		))
	);


	// From: Req4Batch94Filler_PS_CO
	/* 994L, 157L, 564L, 579L) */ if (/* 995L, 141L, 142L, 565L, 580L) */ ((var_1_14) >= (var_1_11))) {
		/* 998L, 156L, 568L, 583L) */ var_1_16 = (
			/* 1001L, 155L, 571L, 586L) */ (max (
				/* 1001L, 155L, 571L, 586L) */ (
					/* 1002L, 153L, 572L, 587L) */ (max (
						/* 1002L, 153L, 572L, 587L) */ (
							/* 1003L, 151L, 573L, 588L) */ (abs (
								var_1_3
							))
						) , (
							var_1_2
						)
					))
				) , (
					var_1_17
				)
			))
		);
	}


	// From: Req5Batch94Filler_PS_CO
	/* 1009L, 192L, 624L, 640L) */ if (/* 1010L, 171L, 172L, 625L, 641L) */ ((/* 1011L, 169L, 173L, 626L, 642L) */ ((/* 1012L, 167L, 174L, 627L, 643L) */ (max (/* 1012L, 167L, 174L, 627L, 643L) */ (var_1_2) , (var_1_3)))) - (var_1_19))) >= (var_1_9))) {
		/* 1017L, 191L, 632L, 648L) */ var_1_18 = (
			/* 1020L, 190L, 635L, 651L) */ (max (
				/* 1020L, 190L, 635L, 651L) */ (
					var_1_3
				) , (
					var_1_19
				)
			))
		);
	}


	// From: Req7Batch94Filler_PS_CO
	/* 1041L, 267L, 755L, 774L) */ if (/* 1042L, 242L, 243L, 756L, 775L) */ ((/* 1043L, 240L, 244L, 757L, 776L) */ ((var_1_15) + (/* 1045L, 239L, 246L, 759L, 778L) */ ((4.6f) * (var_1_11))))) == (var_1_14))) {
		/* 1049L, 262L, 763L, 782L) */ var_1_21 = (
			/* 1052L, 261L, 766L, 785L) */ ((
				var_1_13
			) + (
				var_1_15
			))
		);
	} else {
		/* 1055L, 266L, 769L, 788L) */ var_1_21 = (
			var_1_14
		);
	}


	// From: Req1Batch94Filler_PS_CO
	signed long int stepLocal_1 = /* 911L, 23L, 29L, 279L, 304L) */ ((var_1_16) / (var_1_5));
	signed char stepLocal_0 = var_1_3;
	/* 934L, 54L, 271L, 296L) */ if (/* 918L, 10L, 11L, 272L, 297L) */ ((/* 917L, 8L, 12L, 273L, 298L) */ ((10) << (var_1_2))) < (stepLocal_0))) {
		/* 933L, 52L, 277L, 302L) */ if (/* 922L, 27L, 28L, 278L, 303L) */ ((stepLocal_1) > (/* 921L, 26L, 32L, 282L, 307L) */ ((-1000000000) + (var_1_2))))) {
			/* 928L, 47L, 285L, 310L) */ var_1_1 = (
				/* 927L, 46L, 288L, 313L) */ ((
					var_1_6
				) || (
					var_1_7
				))
			);
		} else {
			/* 932L, 51L, 291L, 316L) */ var_1_1 = (
				var_1_8
			);
		}
	}


	// From: Req6Batch94Filler_PS_CO
	/* 1027L, 224L, 690L, 707L) */ if (/* 1028L, 205L, 206L, 691L, 708L) */ ((var_1_7) || (/* 1030L, 204L, 208L, 693L, 710L) */ ((var_1_21) <= (/* 1032L, 203L, 210L, 695L, 712L) */ (- (var_1_12))))))) {
		/* 1034L, 223L, 697L, 714L) */ var_1_20 = (
			/* 1037L, 222L, 700L, 717L) */ ((
				var_1_17
			) + (
				var_1_9
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 64);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32768);
	assume_abort_if_not(var_1_5 <= 32767);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 0);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -230584.3009213691400e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 2305843.009213691400e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 65534);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 32767);
	var_1_28 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	assume_abort_if_not(var_1_28 != 0.0F);
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 0);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 1);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 65534);
	var_1_36 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 65534);
	var_1_39 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (/* 426L, 10L, 16L, 322L, 347L, 1061L) */ ((/* 427L, 8L, 17L, 323L, 348L, 1062L) */ ((10) << (var_1_2))) < (var_1_3))) {
		if (/* 432L, 27L, 35L, 328L, 353L, 1067L) */ ((/* 433L, 23L, 36L, 329L, 354L, 1068L) */ ((var_1_16) / (var_1_5))) > (/* 436L, 26L, 39L, 332L, 357L, 1071L) */ ((-1000000000) + (var_1_2))))) {
		} else {
		}
	}
	if (/* 452L, 62L, 66L, 437L, 469L, 872L, 1087L, 41L) */ ((var_1_8) || (last_1_var_1_1))) {
		if (/* 457L, 73L, 79L, 441L, 473L, 879L, 1092L, 48L) */ ((/* 458L, 71L, 80L, 442L, 474L, 876L, 1093L, 45L) */ ((var_1_2) >= (last_1_var_1_20))) && (last_1_var_1_1))) {
		} else {
			if (last_1_var_1_1) {
			} else {
			}
		}
	} else {
	}
	if (/* 506L, 141L, 145L, 595L, 610L, 1141L) */ ((var_1_14) >= (var_1_11))) {
	}
	if (/* 521L, 171L, 179L, 657L, 673L, 1156L) */ ((/* 522L, 169L, 180L, 658L, 674L, 1157L) */ ((/* 523L, 167L, 181L, 659L, 675L, 1158L) */ (max (/* 523L, 167L, 181L, 659L, 675L, 1158L) */ (var_1_2) , (var_1_3)))) - (var_1_19))) >= (var_1_9))) {
	}
	if (/* 539L, 205L, 212L, 725L, 742L, 1174L) */ ((var_1_7) || (/* 541L, 204L, 214L, 727L, 744L, 1176L) */ ((var_1_21) <= (/* 543L, 203L, 216L, 729L, 746L, 1178L) */ (- (var_1_12))))))) {
	}
	if (/* 553L, 242L, 250L, 794L, 813L, 1188L) */ ((/* 554L, 240L, 251L, 795L, 814L, 1189L) */ ((var_1_15) + (/* 556L, 239L, 253L, 797L, 816L, 1191L) */ ((4.6f) * (var_1_11))))) == (var_1_14))) {
	} else {
	}
	return /* 576L) */ ((
	/* 575L) */ ((
		/* 574L) */ ((
			/* 573L) */ ((
				/* 572L) */ ((
					/* 571L) */ ((
						/* 425L, 55L, 321L, 346L, 1060L) */ ((
							/* 426L, 10L, 16L, 322L, 347L, 1061L) */ ((
								/* 427L, 8L, 17L, 323L, 348L, 1062L) */ ((
									10
								) << (
									var_1_2
								))
							) < (
								var_1_3
							))
						) ? (
							/* 431L, 53L, 327L, 352L, 1066L) */ ((
								/* 432L, 27L, 35L, 328L, 353L, 1067L) */ ((
									/* 433L, 23L, 36L, 329L, 354L, 1068L) */ ((
										var_1_16
									) / (
										var_1_5
									))
								) > (
									/* 436L, 26L, 39L, 332L, 357L, 1071L) */ ((
										-1000000000
									) + (
										var_1_2
									))
								))
							) ? (
								/* 439L, 47L, 335L, 360L, 1074L) */ ((
									var_1_1
								) == (
									/* 439L, 47L, 335L, 360L, 1074L) */ ((unsigned char) (
										/* 442L, 46L, 338L, 363L, 1077L) */ ((
											var_1_6
										) || (
											var_1_7
										))
									))
								))
							) : (
								/* 445L, 51L, 341L, 366L, 1080L) */ ((
									var_1_1
								) == (
									/* 445L, 51L, 341L, 366L, 1080L) */ ((unsigned char) (
										var_1_8
									))
								))
							))
						) : (
							1
						))
					) && (
						/* 451L, 110L, 436L, 468L, 904L, 1086L, 73L) */ ((
							/* 452L, 62L, 66L, 437L, 469L, 872L, 1087L, 41L) */ ((
								var_1_8
							) || (
								last_1_var_1_1
							))
						) ? (
							/* 456L, 104L, 440L, 472L, 898L, 1091L, 67L) */ ((
								/* 457L, 73L, 79L, 441L, 473L, 879L, 1092L, 48L) */ ((
									/* 458L, 71L, 80L, 442L, 474L, 876L, 1093L, 45L) */ ((
										var_1_2
									) >= (
										last_1_var_1_20
									))
								) && (
									last_1_var_1_1
								))
							) ? (
								/* 464L, 89L, 446L, 478L, 886L, 1099L, 55L) */ ((
									var_1_9
								) == (
									/* 464L, 89L, 446L, 478L, 886L, 1099L, 55L) */ ((signed long int) (
										/* 467L, 88L, 449L, 481L, 885L, 1102L, 54L) */ (min (
											/* 467L, 88L, 449L, 481L, 885L, 1102L, 54L) */ (
												var_1_3
											) , (
												last_1_var_1_20
											)
										))
									))
								))
							) : (
								/* 471L, 102L, 452L, 484L, 897L, 1106L, 66L) */ ((
									last_1_var_1_1
								) ? (
									/* 474L, 96L, 454L, 486L, 892L, 1109L, 61L) */ ((
										var_1_9
									) == (
										/* 474L, 96L, 454L, 486L, 892L, 1109L, 61L) */ ((signed long int) (
											var_1_5
										))
									))
								) : (
									/* 478L, 100L, 458L, 490L, 896L, 1113L, 65L) */ ((
										var_1_9
									) == (
										/* 478L, 100L, 458L, 490L, 896L, 1113L, 65L) */ ((signed long int) (
											var_1_2
										))
									))
								))
							))
						) : (
							/* 482L, 108L, 462L, 494L, 903L, 1117L, 72L) */ ((
								var_1_9
							) == (
								/* 482L, 108L, 462L, 494L, 903L, 1117L, 72L) */ ((signed long int) (
									last_1_var_1_20
								))
							))
						))
					))
				) && (
					/* 491L, 128L, 534L, 550L, 1126L) */ ((
						var_1_10
					) == (
						/* 491L, 128L, 534L, 550L, 1126L) */ ((double) (
							/* 494L, 127L, 537L, 553L, 1129L) */ ((
								/* 495L, 121L, 538L, 554L, 1130L) */ (min (
									/* 495L, 121L, 538L, 554L, 1130L) */ (
										var_1_11
									) , (
										var_1_12
									)
								))
							) + (
								/* 498L, 126L, 541L, 557L, 1133L) */ ((
									var_1_13
								) + (
									/* 500L, 125L, 543L, 559L, 1135L) */ ((
										var_1_14
									) - (
										var_1_15
									))
								))
							))
						))
					))
				))
			) && (
				/* 505L, 158L, 594L, 609L, 1140L) */ ((
					/* 506L, 141L, 145L, 595L, 610L, 1141L) */ ((
						var_1_14
					) >= (
						var_1_11
					))
				) ? (
					/* 509L, 156L, 598L, 613L, 1144L) */ ((
						var_1_16
					) == (
						/* 509L, 156L, 598L, 613L, 1144L) */ ((unsigned short int) (
							/* 512L, 155L, 601L, 616L, 1147L) */ (max (
								/* 512L, 155L, 601L, 616L, 1147L) */ (
									/* 513L, 153L, 602L, 617L, 1148L) */ (max (
										/* 513L, 153L, 602L, 617L, 1148L) */ (
											/* 514L, 151L, 603L, 618L, 1149L) */ (abs (
												var_1_3
											))
										) , (
											var_1_2
										)
									))
								) , (
									var_1_17
								)
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 520L, 193L, 656L, 672L, 1155L) */ ((
				/* 521L, 171L, 179L, 657L, 673L, 1156L) */ ((
					/* 522L, 169L, 180L, 658L, 674L, 1157L) */ ((
						/* 523L, 167L, 181L, 659L, 675L, 1158L) */ (max (
							/* 523L, 167L, 181L, 659L, 675L, 1158L) */ (
								var_1_2
							) , (
								var_1_3
							)
						))
					) - (
						var_1_19
					))
				) >= (
					var_1_9
				))
			) ? (
				/* 528L, 191L, 664L, 680L, 1163L) */ ((
					var_1_18
				) == (
					/* 528L, 191L, 664L, 680L, 1163L) */ ((unsigned long int) (
						/* 531L, 190L, 667L, 683L, 1166L) */ (max (
							/* 531L, 190L, 667L, 683L, 1166L) */ (
								var_1_3
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
		/* 538L, 225L, 724L, 741L, 1173L) */ ((
			/* 539L, 205L, 212L, 725L, 742L, 1174L) */ ((
				var_1_7
			) || (
				/* 541L, 204L, 214L, 727L, 744L, 1176L) */ ((
					var_1_21
				) <= (
					/* 543L, 203L, 216L, 729L, 746L, 1178L) */ (- (
						var_1_12
					))
				))
			))
		) ? (
			/* 545L, 223L, 731L, 748L, 1180L) */ ((
				var_1_20
			) == (
				/* 545L, 223L, 731L, 748L, 1180L) */ ((signed long int) (
					/* 548L, 222L, 734L, 751L, 1183L) */ ((
						var_1_17
					) + (
						var_1_9
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 552L, 268L, 793L, 812L, 1187L) */ ((
		/* 553L, 242L, 250L, 794L, 813L, 1188L) */ ((
			/* 554L, 240L, 251L, 795L, 814L, 1189L) */ ((
				var_1_15
			) + (
				/* 556L, 239L, 253L, 797L, 816L, 1191L) */ ((
					4.6f
				) * (
					var_1_11
				))
			))
		) == (
			var_1_14
		))
	) ? (
		/* 560L, 262L, 801L, 820L, 1195L) */ ((
			var_1_21
		) == (
			/* 560L, 262L, 801L, 820L, 1195L) */ ((double) (
				/* 563L, 261L, 804L, 823L, 1198L) */ ((
					var_1_13
				) + (
					var_1_15
				))
			))
		))
	) : (
		/* 566L, 266L, 807L, 826L, 1201L) */ ((
			var_1_21
		) == (
			/* 566L, 266L, 807L, 826L, 1201L) */ ((double) (
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
