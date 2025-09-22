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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch166Filler_PR_CI.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
unsigned short int var_1_2 = 0;
unsigned short int var_1_3 = 128;
unsigned short int var_1_6 = 25;
unsigned char var_1_7 = 0;
unsigned short int var_1_8 = 64;
signed long int var_1_9 = 32;
unsigned short int var_1_10 = 41078;
unsigned short int var_1_11 = 0;
unsigned short int var_1_12 = 0;
float var_1_13 = 64.6;
float var_1_14 = 7.5;
float var_1_15 = 63.4;
float var_1_18 = 31.25;
float var_1_19 = 15.75;
float var_1_20 = 49.625;
signed short int var_1_21 = 10;
signed short int var_1_22 = 16;
unsigned long int var_1_23 = 128;
unsigned long int var_1_25 = 2;
unsigned long int var_1_26 = 0;
unsigned long int var_1_27 = 5;
unsigned char var_1_28 = 1;
signed long int var_1_29 = -50;
signed long int var_1_30 = 256;
unsigned char var_1_31 = 0;
unsigned long int var_1_32 = 128;
double var_1_33 = 1.5;
double var_1_34 = 1.8;
double var_1_35 = 49.6;
unsigned long int var_1_36 = 5;
unsigned char var_1_37 = 10;
unsigned char var_1_38 = 100;
unsigned char var_1_39 = 8;
unsigned char var_1_40 = 200;
signed char var_1_41 = -16;
signed char var_1_42 = -100;
signed char var_1_43 = -8;
double var_1_44 = 64.875;
signed long int var_1_45 = 5;
signed long int var_1_46 = 8;
double var_1_47 = 64.52;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch166Filler_PR_CI
	unsigned short int stepLocal_1 = var_1_2;
	unsigned short int stepLocal_0 = var_1_3;
	/* 889L, 44L, 311L, 335L) */ if (/* 870L, 4L, 5L, 312L, 336L) */ ((var_1_2) <= (stepLocal_0))) {
		/* 888L, 42L, 315L, 339L) */ if (/* 874L, 18L, 19L, 316L, 340L) */ ((stepLocal_1) > (/* 873L, 17L, 21L, 318L, 342L) */ ((var_1_3) * (var_1_6))))) {
			/* 883L, 37L, 321L, 345L) */ var_1_1 = (
				/* 882L, 36L, 324L, 348L) */ (! (
					/* 881L, 35L, 325L, 349L) */ ((
						/* 879L, 33L, 326L, 350L) */ ((
							var_1_3
						) <= (
							var_1_2
						))
					) || (
						var_1_7
					))
				))
			);
		} else {
			/* 887L, 41L, 330L, 354L) */ var_1_1 = (
				var_1_7
			);
		}
	}


	// From: CodeObject3
	/* 343L, 106L) */ if (/* 344L, 69L, 70L) */ ((/* 345L, 65L, 71L) */ ((0.8) * (var_1_33))) < (/* 348L, 68L, 74L) */ ((var_1_34) * (var_1_35))))) {
		/* 351L, 100L) */ if (var_1_7) {
			/* 353L, 95L) */ var_1_32 = (
				/* 356L, 94L) */ (max (
					/* 356L, 94L) */ (
						/* 357L, 92L) */ ((
							2u
						) + (
							/* 359L, 91L) */ (abs (
								var_1_36
							))
						))
					) , (
						var_1_25
					)
				))
			);
		} else {
			/* 362L, 99L) */ var_1_32 = (
				var_1_26
			);
		}
	} else {
		/* 366L, 105L) */ var_1_32 = (
			var_1_27
		);
	}


	// From: Req2Batch166Filler_PR_CI
	/* 897L, 74L, 410L, 426L) */ if (/* 898L, 59L, 60L, 411L, 427L) */ ((var_1_2) != (var_1_6))) {
		/* 901L, 73L, 414L, 430L) */ var_1_8 = (
			/* 904L, 72L, 417L, 433L) */ ((
				var_1_10
			) - (
				/* 906L, 71L, 419L, 435L) */ ((
					var_1_11
				) + (
					var_1_12
				))
			))
		);
	}


	// From: CodeObject6
	/* 398L, 198L) */ if (/* 399L, 182L, 183L) */ ((/* 400L, 180L, 184L) */ ((var_1_25) ^ (var_1_40))) >= (var_1_23))) {
		/* 404L, 197L) */ var_1_43 = (
			/* 407L, 196L) */ (abs (
				var_1_42
			))
		);
	}


	// From: Req4Batch166Filler_PR_CI
	unsigned short int stepLocal_2 = var_1_11;
	/* 958L, 171L, 615L, 627L) */ if (/* 950L, 157L, 158L, 616L, 628L) */ ((var_1_8) > (stepLocal_2))) {
		/* 957L, 170L, 619L, 631L) */ var_1_20 = (
			/* 956L, 169L, 622L, 634L) */ (min (
				/* 956L, 169L, 622L, 634L) */ (
					/* 954L, 167L, 623L, 635L) */ (abs (
						63.5f
					))
				) , (
					var_1_15
				)
			))
		);
	}


	// From: CodeObject1
	/* 310L, 21L) */ if (/* 311L, 3L, 4L) */ (! (var_1_1))) {
		/* 313L, 19L) */ if (var_1_1) {
			/* 315L, 18L) */ var_1_23 = (
				/* 318L, 17L) */ (max (
					/* 318L, 17L) */ (
						/* 319L, 15L) */ (max (
							/* 319L, 15L) */ (
								var_1_25
							) , (
								var_1_26
							)
						))
					) , (
						var_1_27
					)
				))
			);
		}
	}


	// From: CodeObject5
	/* 381L, 168L) */ if (/* 382L, 135L, 136L) */ ((var_1_39) == (/* 384L, 134L, 138L) */ ((var_1_30) + (var_1_12))))) {
		/* 387L, 166L) */ if (/* 388L, 150L, 151L) */ ((var_1_34) != (/* 390L, 149L, 153L) */ (max (/* 390L, 149L, 153L) */ (var_1_33) , (var_1_35)))))) {
			/* 393L, 165L) */ var_1_41 = (
				/* 396L, 164L) */ (abs (
					var_1_42
				))
			);
		}
	}


	// From: Req6Batch166Filler_PR_CI
	/* 989L, 257L, 768L, 792L) */ if (var_1_1) {
		/* 991L, 251L, 770L, 794L) */ if (/* 992L, 230L, 231L, 771L, 795L) */ ((10) == (/* 994L, 229L, 233L, 773L, 797L) */ ((var_1_11) + (var_1_8))))) {
			/* 997L, 246L, 776L, 800L) */ var_1_22 = (
				/* 1000L, 245L, 779L, 803L) */ ((
					var_1_12
				) - (
					var_1_11
				))
			);
		} else {
			/* 1003L, 250L, 782L, 806L) */ var_1_22 = (
				var_1_11
			);
		}
	} else {
		/* 1007L, 256L, 786L, 810L) */ var_1_22 = (
			var_1_12
		);
	}


	// From: Req3Batch166Filler_PR_CI
	/* 911L, 147L, 472L, 508L) */ if (/* 912L, 88L, 89L, 473L, 509L) */ ((var_1_1) || (var_1_7))) {
		/* 915L, 100L, 476L, 512L) */ var_1_13 = (
			/* 918L, 99L, 479L, 515L) */ ((
				var_1_14
			) + (
				var_1_15
			))
		);
	} else {
		/* 921L, 145L, 482L, 518L) */ if (/* 922L, 107L, 108L, 483L, 519L) */ ((/* 923L, 105L, 109L, 484L, 520L) */ ((/* 924L, 103L, 110L, 485L, 521L) */ (max (/* 924L, 103L, 110L, 485L, 521L) */ (var_1_14) , (var_1_15)))) * (var_1_20))) <= (var_1_20))) {
			/* 929L, 139L, 490L, 526L) */ if (/* 930L, 124L, 125L, 491L, 527L) */ ((var_1_9) == (var_1_12))) {
				/* 933L, 138L, 494L, 530L) */ var_1_13 = (
					/* 936L, 137L, 497L, 533L) */ ((
						var_1_18
					) - (
						/* 938L, 136L, 499L, 535L) */ (min (
							/* 938L, 136L, 499L, 535L) */ (
								var_1_19
							) , (
								2.225f
							)
						))
					))
				);
			}
		} else {
			/* 941L, 144L, 502L, 538L) */ var_1_13 = (
				var_1_15
			);
		}
	}


	// From: CodeObject4
	/* 370L, 126L) */ if (/* 371L, 113L, 114L) */ (! (var_1_1))) {
		/* 373L, 125L) */ var_1_37 = (
			/* 376L, 124L) */ (max (
				/* 376L, 124L) */ (
					var_1_38
				) , (
					/* 378L, 123L) */ (min (
						/* 378L, 123L) */ (
							var_1_39
						) , (
							var_1_40
						)
					))
				)
			))
		);
	}


	// From: Req5Batch166Filler_PR_CI
	/* 964L, 213L, 665L, 691L) */ if (/* 965L, 180L, 181L, 666L, 692L) */ ((var_1_15) < (/* 967L, 179L, 183L, 668L, 694L) */ (- (var_1_13))))) {
		/* 969L, 194L, 670L, 696L) */ var_1_21 = (
			/* 972L, 193L, 673L, 699L) */ (min (
				/* 972L, 193L, 673L, 699L) */ (
					var_1_12
				) , (
					var_1_11
				)
			))
		);
	} else {
		/* 975L, 211L, 676L, 702L) */ if (var_1_1) {
			/* 977L, 205L, 678L, 704L) */ if (var_1_1) {
				/* 979L, 204L, 680L, 706L) */ var_1_21 = (
					var_1_12
				);
			}
		} else {
			/* 983L, 210L, 684L, 710L) */ var_1_21 = (
				var_1_11
			);
		}
	}


	// From: CodeObject2
	/* 324L, 57L) */ if (var_1_1) {
		/* 326L, 55L) */ if (/* 327L, 33L, 34L) */ ((/* 328L, 31L, 35L) */ (abs (/* 329L, 30L, 36L) */ (max (/* 329L, 30L, 36L) */ (var_1_29) , (var_1_30)))))) > (var_1_23))) {
			/* 333L, 54L) */ var_1_28 = (
				/* 336L, 53L) */ ((
					/* 337L, 50L) */ ((
						var_1_26
					) > (
						var_1_25
					))
				) || (
					/* 340L, 52L) */ (! (
						var_1_31
					))
				))
			);
		}
	}


	// From: CodeObject7
	/* 409L, 308L) */ if (/* 410L, 211L, 212L) */ ((/* 411L, 205L, 213L) */ ((/* 412L, 203L, 214L) */ (abs (var_1_11))) % (var_1_45))) < (/* 415L, 210L, 217L) */ ((/* 416L, 208L, 218L) */ (min (/* 416L, 208L, 218L) */ (var_1_38) , (var_1_40)))) >> (var_1_46))))) {
		/* 420L, 235L) */ var_1_44 = (
			var_1_47
		);
	} else {
		/* 424L, 307L) */ var_1_44 = (
			1.25
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 65535);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 65535);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_10 >= 32767);
	assume_abort_if_not(var_1_10 <= 65534);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 16384);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 4294967294);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967294);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967294);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= -2147483647);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483647);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 0);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 254);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -126);
	assume_abort_if_not(var_1_42 <= 126);
	var_1_45 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_45 >= -2147483648);
	assume_abort_if_not(var_1_45 <= 2147483647);
	assume_abort_if_not(var_1_45 != 0);
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= 1);
	assume_abort_if_not(var_1_46 <= 30);
	var_1_47 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_47 >= -922337.2036854766000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854766000e+12F && var_1_47 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 429L, 4L, 8L, 360L, 384L, 1013L) */ ((var_1_2) <= (var_1_3))) {
		if (/* 433L, 18L, 24L, 364L, 388L, 1017L) */ ((var_1_2) > (/* 435L, 17L, 26L, 366L, 390L, 1019L) */ ((var_1_3) * (var_1_6))))) {
		} else {
		}
	}
	if (/* 456L, 59L, 63L, 443L, 459L, 1040L) */ ((var_1_2) != (var_1_6))) {
	}
	if (/* 470L, 88L, 92L, 545L, 581L, 1054L) */ ((var_1_1) || (var_1_7))) {
	} else {
		if (/* 480L, 107L, 115L, 555L, 591L, 1064L) */ ((/* 481L, 105L, 116L, 556L, 592L, 1065L) */ ((/* 482L, 103L, 117L, 557L, 593L, 1066L) */ (max (/* 482L, 103L, 117L, 557L, 593L, 1066L) */ (var_1_14) , (var_1_15)))) * (var_1_20))) <= (var_1_20))) {
			if (/* 488L, 124L, 128L, 563L, 599L, 1072L) */ ((var_1_9) == (var_1_12))) {
			}
		} else {
		}
	}
	if (/* 505L, 157L, 161L, 640L, 652L, 1089L) */ ((var_1_8) > (var_1_11))) {
	}
	if (/* 519L, 180L, 185L, 718L, 744L, 1103L) */ ((var_1_15) < (/* 521L, 179L, 187L, 720L, 746L, 1105L) */ (- (var_1_13))))) {
	} else {
		if (var_1_1) {
			if (var_1_1) {
			}
		} else {
		}
	}
	if (var_1_1) {
		if (/* 546L, 230L, 236L, 819L, 843L, 1130L) */ ((10) == (/* 548L, 229L, 238L, 821L, 845L, 1132L) */ ((var_1_11) + (var_1_8))))) {
		} else {
		}
	} else {
	}
	return /* 570L) */ ((
	/* 569L) */ ((
		/* 568L) */ ((
			/* 567L) */ ((
				/* 566L) */ ((
					/* 428L, 45L, 359L, 383L, 1012L) */ ((
						/* 429L, 4L, 8L, 360L, 384L, 1013L) */ ((
							var_1_2
						) <= (
							var_1_3
						))
					) ? (
						/* 432L, 43L, 363L, 387L, 1016L) */ ((
							/* 433L, 18L, 24L, 364L, 388L, 1017L) */ ((
								var_1_2
							) > (
								/* 435L, 17L, 26L, 366L, 390L, 1019L) */ ((
									var_1_3
								) * (
									var_1_6
								))
							))
						) ? (
							/* 438L, 37L, 369L, 393L, 1022L) */ ((
								var_1_1
							) == (
								/* 438L, 37L, 369L, 393L, 1022L) */ ((unsigned char) (
									/* 441L, 36L, 372L, 396L, 1025L) */ (! (
										/* 442L, 35L, 373L, 397L, 1026L) */ ((
											/* 443L, 33L, 374L, 398L, 1027L) */ ((
												var_1_3
											) <= (
												var_1_2
											))
										) || (
											var_1_7
										))
									))
								))
							))
						) : (
							/* 447L, 41L, 378L, 402L, 1031L) */ ((
								var_1_1
							) == (
								/* 447L, 41L, 378L, 402L, 1031L) */ ((unsigned char) (
									var_1_7
								))
							))
						))
					) : (
						1
					))
				) && (
					/* 455L, 75L, 442L, 458L, 1039L) */ ((
						/* 456L, 59L, 63L, 443L, 459L, 1040L) */ ((
							var_1_2
						) != (
							var_1_6
						))
					) ? (
						/* 459L, 73L, 446L, 462L, 1043L) */ ((
							var_1_8
						) == (
							/* 459L, 73L, 446L, 462L, 1043L) */ ((unsigned short int) (
								/* 462L, 72L, 449L, 465L, 1046L) */ ((
									var_1_10
								) - (
									/* 464L, 71L, 451L, 467L, 1048L) */ ((
										var_1_11
									) + (
										var_1_12
									))
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 469L, 148L, 544L, 580L, 1053L) */ ((
					/* 470L, 88L, 92L, 545L, 581L, 1054L) */ ((
						var_1_1
					) || (
						var_1_7
					))
				) ? (
					/* 473L, 100L, 548L, 584L, 1057L) */ ((
						var_1_13
					) == (
						/* 473L, 100L, 548L, 584L, 1057L) */ ((float) (
							/* 476L, 99L, 551L, 587L, 1060L) */ ((
								var_1_14
							) + (
								var_1_15
							))
						))
					))
				) : (
					/* 479L, 146L, 554L, 590L, 1063L) */ ((
						/* 480L, 107L, 115L, 555L, 591L, 1064L) */ ((
							/* 481L, 105L, 116L, 556L, 592L, 1065L) */ ((
								/* 482L, 103L, 117L, 557L, 593L, 1066L) */ (max (
									/* 482L, 103L, 117L, 557L, 593L, 1066L) */ (
										var_1_14
									) , (
										var_1_15
									)
								))
							) * (
								var_1_20
							))
						) <= (
							var_1_20
						))
					) ? (
						/* 487L, 140L, 562L, 598L, 1071L) */ ((
							/* 488L, 124L, 128L, 563L, 599L, 1072L) */ ((
								var_1_9
							) == (
								var_1_12
							))
						) ? (
							/* 491L, 138L, 566L, 602L, 1075L) */ ((
								var_1_13
							) == (
								/* 491L, 138L, 566L, 602L, 1075L) */ ((float) (
									/* 494L, 137L, 569L, 605L, 1078L) */ ((
										var_1_18
									) - (
										/* 496L, 136L, 571L, 607L, 1080L) */ (min (
											/* 496L, 136L, 571L, 607L, 1080L) */ (
												var_1_19
											) , (
												2.225f
											)
										))
									))
								))
							))
						) : (
							1
						))
					) : (
						/* 499L, 144L, 574L, 610L, 1083L) */ ((
							var_1_13
						) == (
							/* 499L, 144L, 574L, 610L, 1083L) */ ((float) (
								var_1_15
							))
						))
					))
				))
			))
		) && (
			/* 504L, 172L, 639L, 651L, 1088L) */ ((
				/* 505L, 157L, 161L, 640L, 652L, 1089L) */ ((
					var_1_8
				) > (
					var_1_11
				))
			) ? (
				/* 508L, 170L, 643L, 655L, 1092L) */ ((
					var_1_20
				) == (
					/* 508L, 170L, 643L, 655L, 1092L) */ ((float) (
						/* 511L, 169L, 646L, 658L, 1095L) */ (min (
							/* 511L, 169L, 646L, 658L, 1095L) */ (
								/* 512L, 167L, 647L, 659L, 1096L) */ (abs (
									63.5f
								))
							) , (
								var_1_15
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 518L, 214L, 717L, 743L, 1102L) */ ((
			/* 519L, 180L, 185L, 718L, 744L, 1103L) */ ((
				var_1_15
			) < (
				/* 521L, 179L, 187L, 720L, 746L, 1105L) */ (- (
					var_1_13
				))
			))
		) ? (
			/* 523L, 194L, 722L, 748L, 1107L) */ ((
				var_1_21
			) == (
				/* 523L, 194L, 722L, 748L, 1107L) */ ((signed short int) (
					/* 526L, 193L, 725L, 751L, 1110L) */ (min (
						/* 526L, 193L, 725L, 751L, 1110L) */ (
							var_1_12
						) , (
							var_1_11
						)
					))
				))
			))
		) : (
			/* 529L, 212L, 728L, 754L, 1113L) */ ((
				var_1_1
			) ? (
				/* 531L, 206L, 730L, 756L, 1115L) */ ((
					var_1_1
				) ? (
					/* 533L, 204L, 732L, 758L, 1117L) */ ((
						var_1_21
					) == (
						/* 533L, 204L, 732L, 758L, 1117L) */ ((signed short int) (
							var_1_12
						))
					))
				) : (
					1
				))
			) : (
				/* 537L, 210L, 736L, 762L, 1121L) */ ((
					var_1_21
				) == (
					/* 537L, 210L, 736L, 762L, 1121L) */ ((signed short int) (
						var_1_11
					))
				))
			))
		))
	))
) && (
	/* 543L, 258L, 816L, 840L, 1127L) */ ((
		var_1_1
	) ? (
		/* 545L, 252L, 818L, 842L, 1129L) */ ((
			/* 546L, 230L, 236L, 819L, 843L, 1130L) */ ((
				10
			) == (
				/* 548L, 229L, 238L, 821L, 845L, 1132L) */ ((
					var_1_11
				) + (
					var_1_8
				))
			))
		) ? (
			/* 551L, 246L, 824L, 848L, 1135L) */ ((
				var_1_22
			) == (
				/* 551L, 246L, 824L, 848L, 1135L) */ ((signed short int) (
					/* 554L, 245L, 827L, 851L, 1138L) */ ((
						var_1_12
					) - (
						var_1_11
					))
				))
			))
		) : (
			/* 557L, 250L, 830L, 854L, 1141L) */ ((
				var_1_22
			) == (
				/* 557L, 250L, 830L, 854L, 1141L) */ ((signed short int) (
					var_1_11
				))
			))
		))
	) : (
		/* 561L, 256L, 834L, 858L, 1145L) */ ((
			var_1_22
		) == (
			/* 561L, 256L, 834L, 858L, 1145L) */ ((signed short int) (
				var_1_12
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
